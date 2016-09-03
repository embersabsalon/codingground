#include "stdio.h"
#include "sys/types.h"
#include "sys/wait.h"
#include "unistd.h"

#define   MAX_COUNT  200

void  ChildProcess(void);               
void  ParentProcess(void);  

void  main(void){
    pid_t  pid;
    pid = fork();
    if (pid == 0){
        int   i;
        for (i = 1; i <= MAX_COUNT; i++)
          printf("From child line, line= %d, pid=%d\n", i,getpid());

    }
    
    else{
        int   i;
        for (i = 1; i <= MAX_COUNT; i++)
            printf("From parent line, line= %d, pid=%d\n", i,getpid());
    }
}
