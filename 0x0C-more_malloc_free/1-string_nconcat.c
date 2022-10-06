#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from the second string
 *
 * Description:
 * - The returned pointer shall point to a newly allocated space in memory,
 *   which contains s1, followed by the first n bytes of s2, and null
 *   terminated
 * - If the function fails, it should return NULL
 * - If n is greater or equal to the length of s2 then use the entire string s2
 * - if NULL is passed, treat it as an empty string
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int nlen, l1, l2, i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n > l2)
		nlen = l1 + l2 + 1;
	else
		nlen = l1 + n + 1;

	string = malloc(nlen * sizeof(char *));
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		string[i] = s1[i];
	}

	j = 0;
	for (; i < nlen - 1; i++)
	{
		string[i] = s2[j];
		j++;
	}
	string[nlen] = '\0';

	return (string);
}
