#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: character pointer variable
 *
 * Return: the integer
 */

int _atoi(char *s);
{
	int num, i, sign;
	char c[];

	sign = 1;
	for (i = 0; s[i] >= 48 && s[i] <= 57; i++)
	{	
		if (s[i] == '-')
		{
			sign = -1;			
		}
		
	}
}
