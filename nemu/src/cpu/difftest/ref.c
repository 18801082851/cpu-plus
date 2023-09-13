/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

struct diff_context_t {
  word_t gpr[32];
  word_t pc;
};

void load_img2(char* image2) {
  if (image2 == NULL) {
    Log("No image is given. Use the default build-in image.");
    
  }

  FILE *fp = fopen(image2, "rb");
  Assert(fp, "Can not open '%s'", image2);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", image2, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);

}


void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    printf("%ld\n\n",n);
    if(n<=8){paddr_write(addr, n ,*(word_t*)buf);}
    else{
        //size_t sum=0;
        for(size_t i=0;i*4<n;i=i+1){
          paddr_write(addr+i, 8 ,*((paddr_t*)buf+i));
          //printf("%ld :%lx\n",i,paddr_read(addr+i, 8 ));
          //sum=i;
        }
        //paddr_write(addr+sum, n-sum ,*((word_t*)buf+sum));
        printf("difftest_memcpy:success\n");
    }
  } else {
    assert(0);
  }
}


void difftest_regcpy(void *dut, bool direction) {
  struct diff_context_t* ctx = (struct diff_context_t*)dut;
  if (direction == DIFFTEST_TO_REF) {
    for (int i = 1; i < 32; i ++) {
      cpu.gpr[i]=ctx->gpr[i];
    }
    cpu.gpr[0]=0;
    cpu.pc=ctx->pc;
  } else {
    for (int i = 1; i < 32; i ++) {
      ctx->gpr[i]=cpu.gpr[i];
    }
    ctx->gpr[0]=0;
    ctx->pc=cpu.pc;
  }

}

void difftest_exec(uint64_t n) {
 cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  printf("1114\n");
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
