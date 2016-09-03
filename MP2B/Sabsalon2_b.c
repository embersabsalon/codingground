#include "stdio.h"
#include "sys/types.h"
#include "signal.h"
#include "unistd.h"

void  main(void){
    pid_t  pid;
    pid = fork();
    if(pid>0){
        printf("Parent process starting... processid: %d\n",getpid());
        printf("Killing parent process with process id: %d\n",getpid());
        kill(getpid(),SIGINT);
    }
    else if (pid==0){
        printf("Child process starting... processid: : %d\n",getpid());
        printf("Killing child process with process id: %d\n",getpid());
        kill(getpid(),SIGINT);
    }
    else{
        printf("invalid.\n");
    }
}
