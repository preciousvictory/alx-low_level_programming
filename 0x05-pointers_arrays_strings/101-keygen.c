#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords for the program 
 *
 * Return: 0 (success)
 */

int main(void)
{
	int rand_, sum;

	srand(time(NULL));

	sum = 0;
	while (sum < 2400)
	{
		rand_ = rand() % 100;
		printf("%c", rand_);
		sum += rand_;
	}
	printf("%c", (2772 - sum));
	return (0);
}
