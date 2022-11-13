#include "main.h"

/**
 * break_str: break a string into words and using delim as the delimiter
 * @get_arg: the string to be splited
 * @delim: the delimiter used
 *
 * Return: a string containing the command
 */
char **break_str(char **get_arg, char *delim)
{
	char *token, **argv;
	int i = 0;

	argv = malloc(sizeof(char *) * 100);
	token = strtok(*get_arg, delim);
	while (token != NULL)
	{
		argv[i] = token;
		
		token = strtok(NULL, delim);
		i++;
	}
	return (argv);
}


/**
 * main - a first version of a super simple shell that can run commands with
 * their full path, without any argument.
 */
int main(void)
{
	char **get_arg;
	char *delim = " ", **argv;
	size_t len = 1000;
	int i = 0;

	get_arg = malloc(sizeof(char **) * len);
	if (get_arg == NULL)
		return (1);
	argv = malloc(sizeof(char *) * 100);
	if (argv == NULL)
		return (1);

	/* Start shell and getline for user toinput command */
	dprintf(1, "#cisfun$ ");
	getline(get_arg, &len, stdin);

	/** 
	 * Break the string inputed by user into words with space as 
	 * delimiter and apen
	 */
	argv = break_str(get_arg, delim);
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	free(get_arg);
	return (0);
}
