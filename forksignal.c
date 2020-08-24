#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>



int main(int argc, char *argv[])
{
    int i;
    int sig, result;
    pid_t pid;
    printf("sigHandler : %d\n",count);
    count =++
    pid=fork();

    // if child process not uncleard
    if(pid==-1)
    {
        printf("Error:fork()");
        exit(-1);
    }
    //parents process will working
    else if(pid>0)
    {
        for(i=0;i<10;i++)
        {
            result = kill(pid, SIGINT);

            // if signal not recived
            if(result==-1)
        }
            printf("Error:kill()\n");
            exit(-2);
                }
        sleep(1);
    }
    wait(&status);
    exit(0)
    }
    // son process
    else
    {
        signal(SIGINT, sigHandler);
        for(i=0;,i<10;i++)
        {
            pause();
            printf("Hello");            
        }
        exit(0);
       }
}
