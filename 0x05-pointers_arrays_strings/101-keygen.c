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
	int i, sum;
	char rand_
	srand(time(NULL));

	sum = 0;
	for (i = 0; i  < 101; i++)
	{
		rand_ = rand() % 100;
		putchar(rand_);
		sum += rand_;
	}
	putchar(2772 - sum);
	return (0);
}
