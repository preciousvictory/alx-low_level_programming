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

	i = 0;
	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
