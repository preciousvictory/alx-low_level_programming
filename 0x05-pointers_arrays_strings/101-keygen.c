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
	int i, rand_;
	srand(time(0));

	for (i = 0; i  < 101; i++)
	{
		rand_ = rand() % 100;
		putchar(rand_ + '0');
	}
	return (0);
}
