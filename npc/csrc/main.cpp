  #include "Vysyx_22040210_top.h"
  #include "verilated.h"
  #include "verilated_vcd_c.h"
  #include <stdio.h>
  #include <stdlib.h>
  #include <assert.h>
  #include "svdpi.h"
  #include "verilated_dpi.h"

  #include <fstream>
  #include <string.h>
  #include <memory>
  #include <assert.h>
  #include <dlfcn.h>
#include <sys/time.h>
#include <time.h>
  #include <getopt.h>

/*******************COLOR***********************/
#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
void difftest_skip_ref();
uint64_t next_is_skip = 0;
long int totalguest=0;
/*******************START***********************/
typedef struct{
  uint64_t gpr[32];
  uint64_t pc;
  uint64_t ghr;
} CPU_state;
CPU_state cpu ={};

#define CONFIG_DIFFTEST 1
#define BUFF_MAX_LEN 128*10
char *pHead = NULL;			//环形缓冲区首地址
char *pValidRead = NULL;	//已使用环形缓冲区首地址
char *pValidWrite = NULL;	//已使用环形缓冲区尾地址
char *pTail = NULL;			//环形缓冲区尾地址
void InitRingBuff();
void FreeRingBuff();
int WriteRingBuff(char *pBuff, int AddLen);
void ReadRingBuff();
void init_difftest(char *ref_so_file, long img_size, int port);


typedef uint64_t word_t;
typedef word_t   vaddr_t;
typedef uint32_t paddr_t;
static uint8_t *pmem=NULL ;
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x2800000
static char *diff_so_file = NULL;
static int difftest_port = 1234;

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT};
struct NPCstate{
  int state=NPC_RUNNING;
  long long int halt_pc;
  long long int halt_ret;
} npc_state;
  #define DIFFTESTq
void welcome(){
  #ifdef CONFIG_DIFFTEST
  printf(ANSI_FG_BLUE "[welcome] DIFFTEST :" ANSI_NONE ANSI_FG_GREEN " ON\n" ANSI_NONE);
  #else
  printf(ANSI_FG_BLUE "[welcome] DIFFTEST :" ANSI_NONE ANSI_FG_RED " OFF\n" ANSI_NONE);
  #endif
  #ifdef TRACE_ON
  printf(ANSI_FG_BLUE "[welcome] Trace :" ANSI_NONE ANSI_FG_GREEN " ON\n" ANSI_NONE);
  #else
  printf(ANSI_FG_BLUE "[welcome] Trace :" ANSI_NONE ANSI_FG_RED " OFF\n" ANSI_NONE);
  #endif
 
  printf(ANSI_FG_BLUE "[welcome] If trace is enabled, a VCD file will be generated\n" ANSI_NONE);
  printf(ANSI_FG_BLUE "[welcome] Build time: %s, %s\n" ANSI_NONE, __TIME__, __DATE__);
  printf(ANSI_FG_YELLOW "Welcome to riscv-NPC!\n" ANSI_NONE);
  printf("\n" );
  
}


uint8_t* guest_to_host(paddr_t paddr) { 
  //printf("guest_to_host: 0x%x\n",paddr);
  
  return pmem + paddr - CONFIG_MBASE;
  }
static char *img_file = NULL;
static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  FILE *fp = fopen(img_file, "rb");
  assert("Can not open ");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf(ANSI_FG_BLUE "[load_img] The image is %s, size = %ld\n" ANSI_NONE, img_file, size);
  fseek(fp, 0, SEEK_SET);
  size_t ret ;
  ret=fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  fclose(fp);
  return size;
}

void init_ram(){
  pmem = (uint8_t *)malloc(CONFIG_MSIZE);
  //printf(GREEN "ram init success!~\n" NONE);
  assert(pmem);
}
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"diff"     , optional_argument, NULL, 'd'},
    {"image"    , optional_argument, NULL, 'i'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-i:d:", table, NULL)) != -1) {
    switch (o) {
      case 'd': diff_so_file = optarg;/*printf("diff_so_file optarg is %s\n",optarg);*/break;
      case 'i': img_file = optarg;/*printf("img_file optarg is %s\n",optarg);*/ break;
      default : exit(0);
    }
  }
  return 0;
}


void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */
  parse_args(argc, argv);
  init_ram();           //初始化内存
  InitRingBuff();
  long img_size = load_img();
  init_difftest(diff_so_file,img_size,difftest_port);
  welcome();
}

/*******************DPIC***********************/

uint64_t  checkstopVAL ;
uint64_t  thispc       ;
uint64_t  dnpc       ;
uint64_t  mempc   ;
uint64_t  we       ;
uint64_t  data       ;
uint64_t  addr       ;
uint64_t  instvaild       ;
uint64_t  wb_ghr  ;
extern "C" int checkdpicstop(const svLogicVec32* r) {
  checkstopVAL=*(uint64_t*)r;
  return 0;
}
extern "C" int checkdpicpc(long long r) {
  thispc=r;
  return 0;
}
extern "C" int checkdpicdnpc(long long r) {
  dnpc=r;
  return 0;
}
extern "C" int checkdpicwbghr(long long r) {
  wb_ghr=r;
  return 0;
}
extern "C" int checkdpicmempc(long long r) {
  mempc=r;
  return 0;
}
extern "C" int bypassregfilewe(long long r) {
  we=r;
  return 0;
}
extern "C" int bypassregfiledata(long long r) {
  data=r;
  //printf("data is %016lx\n",data);
  return 0;
}
extern "C" int bypassregfileaddr(long long r) {
  addr=r;
  return 0;
}
extern "C" int checkdpicinstvaild(long long r) {
  instvaild=r;
  return 0;
}
extern "C" int checkdcachewrite(long long r) {
  printf("totalguest  current is %ld \n",totalguest);
  return 0;
}
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
/*******************DUMPGPR***********************/
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int i;
  printf("\n");
  for (i = 0; i < 32; i ++) {
    printf("gpr(%02d)[%3s]: " "0x%016lx  " " ", i ,regs[i] , cpu.gpr[i]);
    if (i % 4 == 3) {
      printf("\n");
    }
  }
  printf("pc: " "0x%016lx"   "\n",cpu.pc);
  fflush(stdout);
}



void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}




/*******************ITRACE***********************/

//环形缓冲区初始化
void InitRingBuff(){
	if(NULL == pHead){
		pHead = (char *)malloc(BUFF_MAX_LEN * sizeof(char));
	}
	memset(pHead, 0 , sizeof(BUFF_MAX_LEN));
	pValidRead = pHead;
	pValidWrite = pHead;
	pTail = pHead + BUFF_MAX_LEN;  
}

//环形缓冲区释放
void FreeRingBuff(){
	if(NULL != pHead){
		free(pHead);
	}
}

//向缓冲区写数据
int WriteRingBuff(char *pBuff, int AddLen)
{
	if(NULL == pHead){
		return -1;
	}
	if(AddLen > pTail - pHead){
		return -1;
	}
	if(pValidWrite + AddLen > pTail){
		int PreLen = pTail - pValidWrite;
		int LastLen = AddLen - PreLen;
		memcpy(pValidWrite, pBuff, PreLen);	
		memcpy(pHead, pBuff + PreLen, LastLen);
    //pValidRead=pHead + LastLen;
		pValidWrite = pHead + LastLen;	//新环形缓冲区尾地址
    pValidRead= pValidWrite;
	}
	else{
		memcpy(pValidWrite, pBuff, AddLen);	//将新数据内容添加到缓冲区
		pValidWrite += AddLen;	//新的有效数据尾地址
    pValidRead= pValidWrite;
	}
	return 0;
}

//从缓冲区读数据
void ReadRingBuff(){
	char *pHead_r =pValidRead;
  memcpy(pValidWrite-128, "->", 2);
      for(int i=0;i<10;i++){
          puts(pHead_r);
          pHead_r+=128;
          if(pHead_r==pTail){pHead_r=pHead;}
      }
}

/*******************DPIC MEMORY***********************/
#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)

#define PG_ALIGN __attribute((aligned(4096)))





static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: {printf(ANSI_FG_RED "read error!\n" ANSI_NONE);npc_state.state=NPC_ABORT;return 4096;}
  }
}
static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    //default:{assert(0);}
}
}


# define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
// read
static struct timeval boot_time = {};
struct timeval now;
long seconds,useconds;
long long machinetime =0;
uint64_t us;
void __am_timer_init() {
  // gettimeofday(&boot_time, NULL);
  // gettimeofday(&now, NULL);
  machinetime=0;
}
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    // printf("\n pc=%lx\n",thispc);
//printf("raddr is :0x%llx\n",raddr);
  
  if(raddr == RTC_ADDR||raddr == RTC_ADDR+4){
    next_is_skip=mempc;
    difftest_skip_ref();
    //difftest_skip_ref();
   //printf("\n pc=%lx\n",mempc);
   
    if(raddr == RTC_ADDR) {
    gettimeofday(&now, NULL);
    seconds = now.tv_sec - boot_time.tv_sec;
    useconds = now.tv_usec - boot_time.tv_usec;
    us = seconds * 1000000 + (useconds + 500);
    //us = machinetime;
    *rdata =(uint32_t)us;
    }else if(raddr == RTC_ADDR+4) {
    *rdata =(uint32_t)(us>>32);
    }
    else{*rdata = 0;}
    //printf(RED "raddr error \n" NONE);
   // printf("raddr is :0x%llx,data is 0x%llx \n",raddr,*rdata);
    return;
  }
  else if(raddr >=CONFIG_MBASE){
    if(0x80000000 > raddr ){
      printf("raddr is :0x%llx , value is :0x%llx\n",raddr,*rdata);
    }
    // printf("\n pc=%lx\n",thispc);
    // printf("raddr is :0x%llx\n",raddr);
    *rdata = host_read(guest_to_host(raddr & ~0x7ull),8);
    // if(totalguest>6901){
    // printf("\n pc=%lx\n",thispc);
    // printf("raddr is :0x%llx\n",raddr);
    // printf("rdata is 0x%016llx\n",*rdata);
    // }
    //printf("rdata is 0x%016llx\n",*rdata);
    // if(0x80000190 >= raddr && raddr >=0x80000180){
    //   printf("raddr is :0x%llx , value is :0x%llx\n",raddr,*rdata);
    // }
  }
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  int len;

  long long addr = waddr & ~0x7ull;
  // if(totalguest>6901){
  //  printf("\n pc=%lx\n",thispc);
  //  printf("waddr = 0x%016llx\n",waddr);
  //  printf(" addr = 0x%016llx\n",addr);
  //  printf("wdata = 0x%016llx\n",wdata);
  //  printf("wmask = 0x%x\n",wmask);
  // }
  switch(wmask){
    //8bit
    case 0x1  : len = 1 ;                ;break;
    case 0x2  : len = 1 ; addr = addr + 1;break;
    case 0x4  : len = 1 ; addr = addr + 2;break;
    case 0x8  : len = 1 ; addr = addr + 3;break;
    case 0x10 : len = 1 ; addr = addr + 4;break;
    case 0x20 : len = 1 ; addr = addr + 5;break;
    case 0x40 : len = 1 ; addr = addr + 6;break;
    case -128 : len = 1 ; addr = addr + 7;break;         //sign 0b1000_0000
    //16bit
    case 0x3  : len = 2 ;                ;break;
    case 0xc  : len = 2 ; addr = addr + 2;break;
    case 0x30 : len = 2 ; addr = addr + 4;break;
    case -64  : len = 2 ; addr = addr + 6;break;         //sign 0b1100_0000
    //32bit
    case 0xf  : len = 4 ;                ;break;      
    case -16  : len = 4 ; addr = addr + 4;break;         //sign 0b1111_0000
    //64bit
    case -1   : len = 8 ;  break;        
   // default   : assert(0);
  }
  // if(waddr==0x804050a0){
  //   printf("***********************waddr==0x804050a0 data is %llx totalguest is %ld wmask = 0x%x\n",wdata,totalguest,wmask);
  // }
  //  printf("\n mempc=%lx\n",mempc);
  //  printf("\n pc=%lx\n",thispc);
  //  printf("waddr = 0x%016llx\n",waddr);
  //  printf(" addr = 0x%016llx\n",addr);
  //  printf("wdata = 0x%016llx\n",wdata);
  //  printf("wmask = 0x%x\n",wmask);
  if(addr==SERIAL_PORT){
    //printf("uart\n");
    next_is_skip=mempc;
    difftest_skip_ref();
    putc(char(wdata), stderr);
  }
  else{
    //if(addr==0){printf("\nbad!!!!!!!!!!!!!!!!\n");return;}
     host_write(guest_to_host(addr), len, wdata);
  }
  
  //host_write((uint8_t*)addr, len, wdata);
  //printf("\n write=%lx\n",thispc);
}

/*******************DIFFTEST***********************/ 
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
# define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 33) // GRPs + pc


void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
//void (*ref_difftest_loadimage)(char * image2) = NULL;

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;

static int skip_dut_nr_inst = 0;


void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
  ref_difftest_memcpy = (void(*)(paddr_t,void*,size_t,bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);
  //ref_difftest_loadimage = (void(*)(char*))dlsym(handle, "load_img2");
  assert(ref_difftest_memcpy);
  ref_difftest_regcpy = (void(*)(void*,bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);
  ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);
  ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);
  void (*ref_difftest_init)(int) = (void(*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);
  for (int i = 0; i < 32; i ++) {
      cpu.gpr[i]=0;
    }
  ref_difftest_init(port);
  cpu.pc = CONFIG_MBASE;
  cpu.ghr = 0;
  //ref_difftest_loadimage(img_file);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  
}


static inline bool difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut) {
  if ((ref  ) != (dut  )) {
    printf("\n%s is different after executing instruction at pc = " ANSI_FG_RED "%lx" ANSI_NONE
        ", right = " ANSI_FG_RED "%lx" ANSI_NONE ", wrong = " ANSI_FG_RED "%lx" ANSI_NONE ", diff = " ANSI_FG_RED "%lx" ANSI_NONE "\n",
        name, pc, ref, dut, ref ^ dut);
      //dump_gpr();
    return false;
  }
  return true;
}
static inline int check_reg_idx(int idx) {
  assert(idx >= 0 && idx < 32);
  return idx;
}
static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if (1==1) {
  int i;
  int flag=0;
  // do not check $0
  for (i = 1; i < 32; i ++) {
    flag=flag+difftest_check_reg(reg_name(i, 4), pc, ref_r->gpr[i], cpu.gpr[i]);
  }
  
  flag=flag+difftest_check_reg("pc", pc, ref_r->pc, (int64_t)cpu.pc);
  //flag=flag+difftest_check_reg("ghr", pc, ref_r->ghr, (int64_t)cpu.ghr);
  if(flag==32){return true;}
  else{return false;}
  }
  return true;
}


static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}


void difftest_step(vaddr_t pc, vaddr_t npc) {
  CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      printf("can not catch up with ref.pc = " "%lx" " at pc = " "%lx", ref_r.pc, pc);
    return;
  }

  if (is_skip_ref&&(next_is_skip==pc)) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    //printf("is skip\n");
    is_skip_ref = false;
    return;
  }
  //printf("\n before exute inst\n");
  ref_difftest_exec(1);
  //printf("\n after exute inst\n");
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
 // printf("\n after copy status\n");
  checkregs(&ref_r, pc);
 // printf("\n after check status\n");
}

#else

#endif



/*******************END***********************/
void npc_halt(long long int pc,long long int value){      
  npc_state.halt_pc=pc;       
  npc_state.halt_ret=value;
  if(npc_state.state == NPC_END&&npc_state.halt_ret == 0){
    printf( ANSI_FG_BLUE "[halt] npc: " ANSI_NONE ANSI_FG_GREEN "HIT GOOD TRAP" ANSI_NONE);
    printf(" at pc = 0x%016lx\n",thispc);
  }
  else if(npc_state.state == NPC_END&&npc_state.halt_ret != 0){
    
    printf( ANSI_FG_BLUE "[halt] npc: " ANSI_NONE ANSI_FG_RED "HIT BAD TRAP" ANSI_NONE);
    printf(" at pc = 0x%016lx\n",thispc);
  }
  else if(npc_state.state == NPC_ABORT){
    printf( ANSI_FG_BLUE "[halt] npc: " ANSI_NONE ANSI_FG_RED "ABORT" ANSI_NONE);
    printf(" at pc = 0x%016lx\n",thispc);
  }
}
void updatecpu(){
  for (int i = 0; i < 32; i ++) {
      cpu.gpr[i]=cpu_gpr[i];
      }
      cpu.ghr=wb_ghr;
      cpu.pc=dnpc;
      if(we&&instvaild){cpu.gpr[addr]=data;}
}
int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ;
  return !good;
} 
void displaytime() {
    time_t cur_time;      //定义变量
    time(&cur_time);    //获取当前时间
    printf("%s",ctime(&cur_time));   //将当前时间转换为字符串并输出

}

/*******************MAIN***********************/
  int main(int argc, char** argv, char** env) {
      //printf("\n TEST \n");
      #ifdef SIM_ON
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Vysyx_22040210_top* top = new Vysyx_22040210_top{contextp};
      int cycle_num=200;
      uint64_t limit = cycle_num;
      init_monitor(argc, argv);
      __am_timer_init();
      
      #endif
      
      #ifdef TRACE_ON
        VerilatedVcdC* tfp = new VerilatedVcdC;
        Verilated::traceEverOn(true);
        top->trace(tfp, 99);
        tfp->open("obj_dir/npc_sim.vcd");
        unsigned long  cycle = 0;
      #endif
      
      #ifdef SIM_ON
      
      while( !contextp->gotFinish()){
        if(contextp->time()%1000==0)
          machinetime=machinetime+1;
        top->clk =0;
        if(contextp->time()<10){top->rst =1;}else{top->rst =0;}
        contextp->timeInc(1);
        //printf("before eval\n");
        top->eval();
        //printf("after eval\n");
        #ifdef TRACE_ON
            if(totalguest>=0 )
              tfp->dump(cycle++);
        #endif
        if (checkstopVAL){
          
          npc_state.state=NPC_END;
          printf("\n**********IPC=%f**********\n",(double)((double)totalguest/(double)(contextp->time()-10)));
          break;
        }
        if (npc_state.state==NPC_END||npc_state.state==NPC_ABORT){
          
          break;
        }
      
        updatecpu();
      
        if(instvaild!=0){
          difftest_step(thispc,dnpc);
        totalguest++;
       // if(totalguest%50000==0){printf("\ncurrent is %ld\n",totalguest);printf("machine time is %lld\n",machinetime);}
       //if((totalguest >= 4233000) && (totalguest%100==0)){printf("\ntotalguest is 1,483,308 current is %ld ",totalguest);displaytime();printf("machine time is %lld\n",machinetime);}
         //1600000
       // if((totalguest >= 1000 && totalguest <= 2000 && (totalguest%10==0)) ){printf("\ntotalguest is 1,483,308 current is %ld ",totalguest);displaytime();printf("machine time is %lld\n",machinetime);} 
         //printf("finish pc %lx\n",thispc);
        }
        
        top->clk =1;
      // printf("before eval\n");
       //if(cycle==163){tfp->close();}
        top->eval();
       
        #ifdef TRACE_ON
        if(totalguest>=0)
            tfp->dump(cycle++);
        //if(totalguest>2){printf("\ncycle %ld",cycle);}  
        #endif
      //printf("after eval\n");
        // printf("\n thispc=%lx\n",thispc);
        // printf("\nruntime=%ld\n",contextp->time());
      }
      
      //dump_gpr();
      updatecpu();
      //isa_reg_display();
     // ref_difftest_exec(-1);

      
      npc_halt(thispc,cpu.gpr[10]);
      
      #endif
      #ifdef TRACE_ON
        tfp->close();
      #endif
      #ifdef SIM_ON
      delete top;
      delete contextp;
      #endif
      
      return is_exit_status_bad();
  }

