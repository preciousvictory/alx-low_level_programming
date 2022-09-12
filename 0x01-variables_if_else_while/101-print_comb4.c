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
			if ((a < b && b < c) && (a != b && b != c))
			{
				putchar(48 + a);
				putchar(48 + b);
				putchar(48 + c);
				if (!(a + b + c = 24 && c = 9))
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
}

putchar('\n');
return (0);
}
