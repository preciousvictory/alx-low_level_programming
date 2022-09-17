#include "main.h"

/**
 * main - write a program that finds and prints the sum of the even-valued
 * terms, followed by a new line.
 *
 * Return:  0 (success).
 */
int main(void)
{
	long int i, num_1, num_2, sum;

	num_1 = 1;
	num_2 = 2;
	printf("%ld, %ld, ", num_1, num_2);

	while (sum < 4000000)
	{
		sum = num_1 + num_2;
		if (sum % 2 == 0)
		{
			printf("%ld, ", sum);
		}

		num_1 = num_2;
		num_2 = sum;
	}
	putchar('\n');
	return (0);
}
