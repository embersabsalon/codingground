#include "stdio.h"
#include "sys/types.h"
#include "signal.h"
#include "unistd.h"

#define   MAX_COUNT  200

void  ChildProcess(void);               
void  ParentProcess(void);  

void  main(void){
    pid_t  pid;
    pid = fork();
    int max_count=20;
    int status;
    wait(&status);
    if(pid>0){
        printf("Parent process starting... processid: %d\n",getpid());
        for(int i=0;i<max_count;i++){
            printf("0\n");
        }
        printf("Ending parent process with process id: %d\n",getpid());
    }
    else if (pid==0){
        printf("Child process starting... processid: : %d\n",getpid());
        for(int i=0;i<max_count;i++){
            printf("1\n");
        }
        printf("Ending child process with process id: %d\n",getpid());
    }
    else{
        printf("invalid.\n");
    }
}
