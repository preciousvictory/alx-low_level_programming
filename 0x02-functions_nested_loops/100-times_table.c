#include "main.h"

/**
 * print_number - a function that prints number
 * @num: The number
 *
 * Return: it returns the number
 */

int print_number(int num)
{
	int o;

	if ((num / 10) > 9)
	{
		o = print_number(num / 10);
	}
	putchar(o);
	/* return (o); */
}


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

				if (m > 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(48 + print_number(m));
					putchar(48 + m % 10);
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
