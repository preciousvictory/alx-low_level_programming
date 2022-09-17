#include "main.h"

/**
 * main - write a program that finds and prints the sum of the even-valued
 * terms, followed by a new line.
 *
 * Return:  0 (success).
 */
int main(void)
{
	long int num_1, num_2, next_num, sum;

	num_1 = 1;
	num_2 = 2;
	sum = num_1 + num_2;

	while (sum <= 4000000)
	{
		next_num = num_1 + num_2;
		if (next_num % 2 == 0)
		{
			sum = sum + next_num;
		}

		num_1 = num_2;
		num_2 = next_num,;
	}
	putchar('\n');
	return (0);
}
