#include "main.h"
#include <string.h>

/**
 * break_str: break a string into words and using delim as the delimiter
 * @get_arg: the string to be splited
 * @delim: the delimiter used
 */
void break_str(char **get_arg, char *delim)
{
	char *token;

	token = strtok(*get_arg, delim);

	while (token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, delim);
	}

	printf("%s-\n", token);
}

/**
 * main -  Write a program that prints "$ ", wait for the user to enter a
 * command, prints it on the next line.
 * @ac: argument count
 * @av: NULL terminated array of string that contains all the arguments
 *
 * Return: the return the number of characters read
 */
int main(int ac, char **av)
{
	char **get_arg;
	char *delim = " ";
	size_t len = 1000;

	(void) ac;
	(void) av;

	get_arg = malloc(sizeof(char **) * len);
	if (get_arg == NULL)
		return (1);

	dprintf(1, "$ ");
	getline(get_arg, &len, stdin);

	/* print the user input */
	printf("%s", *get_arg);

	break_str(get_arg, delim);
	
	free(get_arg);
	return (0);
}
