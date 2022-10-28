#include "main.h"
#include <stdlib.h>

/**
 * raise_to_pow - a function that return 2 raise to the power of pow
 * @pow: the power to be raised
 *
 * Return: the answer
 */
unsigned int raise_to_pow(unsigned int pow)
{
	unsigned int num = 1;

	if (pow == 0)
		return (1);

	while (pow > 0)
	{
		num *= 2;
		pow--;
	}

	return (num);
}

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * 	- there is one or more chars in the string b that is not 0 or 1
 * 	- b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, pow = strlen(b) - 1;
	char s[3];

	if (b == NULL)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		else
		{
			s[0] = b[i];
			num += atoi(s) * raise_to_pow(pow);
			pow--;
		}
	}

	return (num);
}
