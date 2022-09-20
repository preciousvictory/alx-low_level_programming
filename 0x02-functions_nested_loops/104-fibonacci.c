#include "main.h"

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (success)
 */

int main(void)
{
	long long int i, num_1, num_2, sum;

	num_1 = 1;
	num_2 = 2;
	printf("%lld, %lld, ", num_1, num_2);

	for (i = 0; i < 96; i++)
	{
		sum = num_1 + num_2;

		if (i == 96)
			printf("%lld", sum);
		else
			printf("%lld, ", sum);

		num_1 = num_2;
		num_2 = sum;
	}
	putchar('\n');

	return (0);
}
