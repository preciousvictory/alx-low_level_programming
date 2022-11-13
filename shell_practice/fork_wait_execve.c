#include "main.h"

/**
 * main - a program that executes the command ls -l /tmp in 5 different child
 * processes.
 * Each child should be created by the same process (the father).
 * Wait for a child to exit before creating a new child.
 *
 * Return: 0 sucess
 */
int main()
{
	pid_t my_pid;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "ls", "-l", "/tmp", NULL}, *null_str = NULL;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}

	my_pid = getpid();

	if (child_pid == 0)
	{
		printf("child pid is %u\n", my_pid);
		if (execve(argv[0], argv, &null_str))
			perror("Error:");
	}
	else
	{
		wait(&status);
		printf("(%u) %u, I am your father\n", my_pid, child_pid);
	}
}
