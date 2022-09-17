#include "main.h"

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return:  0 (success).
 */
int main(void)
{
	int i, num_1, num_2, sum;

	num_1 = 1;
	num_2 = 2;
	printf("%d, %d, ", num_1, num_2);

	for (i = 0; i < 50; i++)
	{
		sum = num_1 + num_2;
		printf("%lu, ", (long)sum);
		num_1 = num_2;
		num_2 = sum;
	}
	return (0);
}
