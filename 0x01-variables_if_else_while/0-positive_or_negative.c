#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main function
 *
 * program will assign a random number to the variable n each time
 * print whether the number stored in the variable 
 * n is positive or negative.
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positve\n", n);
	}
	else if (n == 0)
	{
		prinf("%d is zero\n", n);
	}
	else
	{
		prinf("%d is negative\n", n);
	}
	return (0);
}
