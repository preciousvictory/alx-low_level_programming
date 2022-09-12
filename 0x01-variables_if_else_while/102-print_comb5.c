#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
int a;
int b;
int c;
int d;

for (a = 0; a < 10; a++)
{
	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 10; c++)
		{
			for (d = 0; d < 10; d++)
			{
				if (((c + d) > (a + b) &&  c >= a) || a < c)
				{
					putchar(48 + a);
					putchar(48 + b);
					putchar(' ');
					putchar(48 + c);
					putchar(48 + d);
					if (!(a + b == 17 && c + d == 18 && d == 9))
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
}

putchar('\n');
return (0);
}
