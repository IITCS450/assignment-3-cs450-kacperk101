#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int pid;
  
  printf(1, "Starting lottery benchmark (30 vs 10 tickets)\n");
  
  pid = fork();
  if(pid == 0){
    settickets(30);
    int i;
    for(i = 0; i < 500000; i++);
    printf(1, "Child 1 (30 tickets) done\n");
    exit();
  }
  
  pid = fork();
  if(pid == 0){
    settickets(10);
    int i;
    for(i = 0; i < 500000; i++);
    printf(1, "Child 2 (10 tickets) done\n");
    exit();
  }
  
  wait();
  wait();
  exit();
}