#include <stdio.h>
/**
 * main -prints all single digit numbers of base 10 starting from 0
 *
 * separated by ,
 * Numbers should be printed in ascending order
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < 9)
	{
		while (j < 10)
		{
			putchar(48 + i);
			putchar(48 + j);
			if ((i != 8) && (j != 9))
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
