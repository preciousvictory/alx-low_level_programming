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
	int i;
	srand(time(0));

	for (i = 0; i  < 10; i++)
	{
		printf("%d\n", rand());
	}
	return (0);
}
