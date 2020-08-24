#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void sigHandler(int sig)
{
	printf("OUCH!-i got signal %d\n", sig);
	(void)signal(SIGINT,SIG_DFL);
}
int main()
{
signal(SIGINT,sigHandler);

while(1)
{
	printf("Hello World!\n");
	sleep(1);
	}
}
