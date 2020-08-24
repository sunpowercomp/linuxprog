#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	int status;
	pid_t pid;
	
	pid = fork();
	
	switch(pid)
	{
		case -1:
			printf("Failed fork()\n");
			exit(-1);
		case 0:
			execlp("./hell","hello","",(char*)NULL);
			exit(0);
		default:
			printf("parents process\n");
			printf("child pid = %d\n",pid);
	}
	
	pid = wait(&status);
	printf("exit process pid : %d\n", pid);
	
	return 0;
}
