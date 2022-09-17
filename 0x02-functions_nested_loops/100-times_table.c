#include "main.h"

/**
 * print_times_table -  a function that prints the n times table,
 * starting with 0.
 * @n: The number
 */

void print_times_table(int n)
{
	int i, j, m;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;

				if (m > 9 && m < 99)
				{
					printf(",  %d", m);
				}
				else if (m > 99)
				{
					printf(", %d", m);
				}
				else
				{
					if (!(j == 0))
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					putchar(48 + m);
				}
			}
			putchar('\n');
		}
	}
}
