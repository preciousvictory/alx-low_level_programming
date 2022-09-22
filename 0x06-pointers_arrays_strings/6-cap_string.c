#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: string
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?,
 * \", (, ), {, and }
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = "\t\n,;.!? \" (){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122 || s[0] >= 97 && s[0] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
					s[0] = s[0] - 32;
				}
			}
		}
	}

	return (s);
}
