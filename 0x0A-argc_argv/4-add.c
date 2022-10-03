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
	int c, add = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (c = 1; c < argc; c++)
		{
			if (isdigit(argv[c][0]))
			{
				add = add + atoi(argv[c]);
			}
			else
			{
				add = add * 0;
				break;
			}
		}

		if (add > 0)
			printf("%d\n", add);
		else
			printf("Error\n");
	}

	return (0);
}
