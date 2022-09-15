#include <stdio.h>
#include "main.h"
/**
 * times_table - (void)
 * Return: 0(success)
 */
void times_table(void)
{

	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (m > 9)
			{
				putchar(',');
				putchar(' ');
				putchar(48 + m / 10);
				putchar(48 + m % 10);

			}
			else
			{
				if (!(j == 0))
				{
					putchar(',');
					putchar(' ');
					putchar(' ');

				}
				putchar(48 + m);
			}

		}
	}
}
