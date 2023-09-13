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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char    *exp;
  word_t  lastval;
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
  if(free_==NULL){
    assert(0);
  }
  WP *p   = free_;
  free_   = free_ -> next;
  return p;
}
void freewp(WP *wp){
  if(!(wp_pool <=wp && wp <(wp_pool+NR_WP))){
    printf("111\n");
    assert(0);
  }
  free(wp->exp);
  wp->next = free_;
  free_ = wp;
}

int set_watchpoint(char* w){
  bool success;
  word_t  val =expr(w,&success);
  if (!success){
    return -1;
  }
  WP *p = new_wp();
  p->exp=strdup(w);
  p->lastval=val; 
  p->next=head;
  head  = p;

  return p->NO;
}


void list_watchpoint(){
  if(head == NULL){
    printf("NO WP\n");
    return ;
  }
  printf("%8s\t%8s\t%8s\t\n","NO","Adress","Enable");
  WP *p;
  for(p=head ;p != NULL; p=p->next){
    printf("%8d\t%8s\t" FMT_WORD "\n",p->NO,p->exp,p->lastval);
  }

}



bool deltewp(int NO){
  WP *p;
  WP *p_1=NULL;
  for(p=head;p != NULL; p_1=p,p=p->next){
    if(p->NO==NO){
      break;
    }
  }
  
    if(p==NULL){
      return false;
    }
    if(p_1==NULL){
      head = p->next;
    }
    else{
      p_1->next=p->next;
    }
    

    
    freewp(p);
    return true;
}

void scan_wp(vaddr_t pc){
  WP *p;
  for (p = head; p != NULL; p=p->next)
  {
    bool success;
    word_t  newval=expr(p->exp,&success);
    if (p->lastval!=newval){
      printf("hint wp %d at pc: " FMT_WORD",expr = %s\n",p->NO,pc,p->exp);
      printf("old val = "FMT_WORD"\nnew val = "FMT_WORD "\n",p->lastval,newval);
      p->lastval = newval;
      nemu_state.state=NEMU_STOP;
      return;
    }
    ;
  }
  
}
