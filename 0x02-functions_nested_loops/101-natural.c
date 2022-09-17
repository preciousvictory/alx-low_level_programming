#include "main.h"

/**
 * sum_of_multiples - a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * @n: The number
 */

void sum_of_multiples(int n)
{
	int i, sum;

	for (i = 0; i < n; i++)
	{
		sum = 0;

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
}


/**
 * main - run the program
 *
 * Return: Always 0.
 */

int main(void)
{
	sum_of_multiples(1024);
	putchar('\n');

	return (0);
}
