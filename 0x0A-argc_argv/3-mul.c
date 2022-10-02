#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argumrnt vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 2)
	{
		printf("Error\n");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
