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
vaddr_t epc_all;
void etrace_main(){
  printf("etrace interrupt/exception NO is 0x%lx \ncurrect pc is 0x%08lx,mtevc is 0x%08lx\n\n",cpu.csr[66],cpu.pc,epc_all);
}
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[65] = cpu.pc; //mepc
  cpu.csr[66] = NO;     //mcause
  // printf("cpu.csr[65] is %lx",cpu.csr[65]);
  // printf("cpu.pc is %lx",cpu.pc);
  // printf("cpu.csr[66] is %ld",cpu.csr[66]);
  epc_all = epc;
  etrace_main();
 // IFDEF(CONFIG_ETRACE,etrace_main());
  return epc;
}

word_t isa_mret_intr() {
  return cpu.csr[65];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
