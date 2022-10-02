#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * followed by a new line
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
