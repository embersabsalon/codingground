#include "stdio.h"
#include "sys/types.h"
#include "sys/wait.h"
#include "unistd.h"

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
        printf("Parent process with process id %d now ending\n",getpid());
    }
    else if (pid==0){
        printf("Child process starting... processid: : %d\n",getpid());
        for(int i=0;i<max_count;i++){
            printf("1\n");
        }
        printf("Child process with process id %d\n now ending",getpid());
    }
    else{
        printf("invalid.\n");
    }
}

