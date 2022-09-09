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
		putchar(44);
		if (i != 9)
		}
			putchar(32);
		}
		i++;
	}
	return (0);
}
