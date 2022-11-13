#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char* nullstr = NULL;

	printf("Before execve\n");
	if (execve(argv[0], argv, &nullstr) == -1)
	{
		perror("Error:");
	}

	printf("After execve\n");
	return (0);
}
