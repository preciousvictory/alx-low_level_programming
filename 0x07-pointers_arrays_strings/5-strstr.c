#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * The _strstr() function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: string to be scanned.
 * @needle: small string to be searched with-in haystack string.
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, c = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j] && needle[j] != '\0')
		{
			c = 1;
			j++;
		}
		else
			c = 0;
			break;		
	}

	if (c = 1)
	{
		return (needle);
	}
	return ('\0');
}
