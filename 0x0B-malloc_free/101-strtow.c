#include "main.h"

/**
 * strtow - a function that splits a string into words.
 * @str: string
 *
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 *
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char *strw;
	int i, s, e;
	
	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			s = i;
			break;	
		}
	}
	for (i = s; str[i] != '\0'; i++)
	{
		if (str[i] == " " && str[i + 1] == " ")
		{
			e = i;
		}
	}

	i = 0;
	while (s <= e):
	{
		if (str[s] == " ")
		{
			strw[i] = '\0';
		}
		strw[i] = str[s];

		i++;
		s++;
	}

	return (strw);
}
