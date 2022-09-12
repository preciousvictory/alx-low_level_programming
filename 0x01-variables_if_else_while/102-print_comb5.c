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

a = 0;
while (a < 0)
{
	b = 0;
	while (b < 10)
	{
		c =  0;
		while (c < 10)
		{
			d = 0;
			while (d < 10)
			{
				if (!(a == d && b == c))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a + b != 17 && d + c != 18 && d != 9)
					{
						putchar(',');
							putchar(' ');
					}
				}
				d++;
			}
		c++;
			}
		b++;
	}
	a++;
}
putchar('\n');
return (0);
}
