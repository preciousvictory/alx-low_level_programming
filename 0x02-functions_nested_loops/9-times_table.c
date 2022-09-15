#include "main.h"
/**
 * times_table - (void)
 *
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
			m = i * j;
			putchar(48 + m);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
