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
int j;
int k;
int l;

i = 0;
while (i < 10)
{
	j = 0;
	while (j < 10)
	{
		k = 0;
		while (k < 10)
		{
			l = 0;
			while (l < 10)
				{
				if ((!(l == i)) && (!(k == j)))
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(32);
					putchar(48 + k);
					putchar(48 + l);
					if (((i + j) != 17) && ((k + l) != 18))
					{
					putchar(44);
					putchar(32);
					}
				}
				l++;
			}
			k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
