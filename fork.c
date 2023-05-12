#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	char *buffer;
	size_t bufsize;
	size_t characters;

	printf("main id = %d\n", getpid());
	printf("Do0ola$ ");
	characters = getline(&buffer, &bufsize, stdin);
	if (fork() == 0)
	{
		printf("%s" , buffer);
		printf("process id = %d\n" ,  getpid());
		printf("parent id = %d\n" , getppid());
		if (execve("/bin/ls", argv, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
	printf("main id again = %d\n", getpid());
	}
	return (0);
}
