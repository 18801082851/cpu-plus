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
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/vaddr.h>
#include <memory/paddr.h>
#include "sdb.h"
#include <common.h>
#include <utils.h>
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
static int cmd_help(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_si(char *args);
static int cmd_c(char *args);
static int cmd_q(char *args);
bool make_token(char *e);
// static int cmd_expr(char *args);
void list_watchpoint();
static int cmd_w(char *args);
static int cmd_d(char *args);
int set_watchpoint(char* w);
static int cmd_p(char *args);
bool deltewp(int NO);





static int cmd_p(char *args) {
  if (args != NULL) {
    bool success;
    word_t r = expr(args, &success);
    if(success) { printf(FMT_WORD "\n", r); }
    else { printf("Bad expression\n"); }
  }
  return 0;
}


static int cmd_si(char *args) {
  char *arg_si = strtok(NULL, " ");
  uint64_t si_step=1;
  
  
  if (arg_si == NULL) {
    cpu_exec(1);
  }
  else{
    sscanf(arg_si, "%ld", &si_step);
    cpu_exec(si_step);
  }
return 0;
}

static int cmd_d(char *args){
  char *arg_d = strtok(NULL, " ");
  if (arg_d == NULL) {
     printf("no argument given\n");
  }
  else{
    int NO;
    
    sscanf(args,"%d",&NO);
    
    bool s=deltewp(NO);
    if(!s){
      printf("W%d DONT EXIT!!\n",NO);
    }

  }
return 0;
}

static int cmd_w(char *args) {
  char *arg_w = strtok(NULL, " ");
  if (arg_w == NULL) {
    return 0;
  }
  else{
    int NO =set_watchpoint(arg_w);
    if(NO==-1){
      printf("Bad !!!\n");
    }
    else{
      printf("Set WP %d\n",NO);
    }
  }
  return 0;
}

static int cmd_info(char *args) {
  char *arg_info = strtok(NULL, " ");
  if (arg_info == NULL) {
    /* no argument given */
      printf("no argument given\n");
  }
  else{
      if(strcmp(arg_info, "r") == 0){
        isa_reg_display();
      }
      else if (strcmp(arg_info, "w") == 0){
        list_watchpoint();
      }
      else{
          printf("Unknown  argument given\n");
      }

  }
  return 0;
}


static int cmd_x(char *args) {
    char *arg_x1 = strtok(NULL, " ");
    //char *arg_x2 = strtok(NULL, " ");
    int temp1;
     int i;
    vaddr_t temp2;
    sscanf(arg_x1, "%d", &temp1);
    //sscanf(arg_x2, "%lx", &temp2);
    //printf("0x%08x ", (uint32_t)vaddr_read_safe(addr, 4));
    // printf("%ld        %ld\n",temp1,temp2);
    // printf("%ld        %lx\n",temp1,temp2);
    bool success;
    temp2 = expr(arg_x1 + strlen(arg_x1) + 1, &success);
    if (success) {
      for (i = 1; i <= temp1; i ++) {
        if (i % 4 == 1) {
          printf(FMT_WORD ": ", temp2);
        }

        printf("0x%08x ", (uint32_t)vaddr_read(temp2, 4));
        temp2 += 4;
        if (i % 4 == 0) {
          printf("\n");
        }
      }
      printf("\n");
    }

    else { printf("Bad expression\n"); }

    // word_t memory_data;
    // vaddr_t base_addr=(temp2-(temp1/2));
    // for(vaddr_t i =0;i<(vaddr_t)temp1;i++){

    //     if((base_addr+i)>=CONFIG_MBASE){ 
    //       memory_data =paddr_read(base_addr+i,4);
    //       printf("0x%lx        0x%lx\n",base_addr+i,memory_data); 
    //       }
        
    // }

    //pr
    return 0;
}



/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Continue the execution of the program", cmd_si },
  { "info", "info r - print register values; info w - show watch point state", cmd_info },
  { "p", "Evaluate the value of expression", cmd_p },
  { "w", "Set watchpoint", cmd_w },
  { "d", "Delete watchpoint", cmd_d },
  { "x", "Examine memory", cmd_x },
  /* TODO: Add more commands */

};  

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);


    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */

     char *args = cmd + strlen(cmd) + 1;
     if (args >= str_end) {
       args = NULL;
     }


#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
