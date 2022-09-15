#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - (void)
 * prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: 0 (success)
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(':');
					putchar(48 + k);
					putchar(48 + l);
					putchar('\n');
				}
			}
		}
	}
}
