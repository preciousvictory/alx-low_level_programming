#include "main.h"

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return:  0 (success).
 */
int main(void)
{
	long int i, num_1, num_2, sum;

	num_1 = 1;
	num_2 = 2;
	printf("%ld, %ld, ", num_1, num_2);

	for (i = 0; i < 48; i++)
	{
		sum = num_1 + num_2;
		if (i == 47)
		{
			printf("%ld", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}

		num_1 = num_2;
		num_2 = sum;
	}
	return (0);
}
