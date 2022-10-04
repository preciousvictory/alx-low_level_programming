#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * - Returns NULL if ac == 0 or av == NULL
 * - Returns a pointer to a new string, or NULL if it fails
 * - Each argument should be followed by a \n in the new string
 *
 * Return: a new string or NULL when it fails
 */

char *argstostr(int ac, char **av)
{
	char **str;
	int i, j, w_len, h_len;

	h_len = ac * sizeof(char *);
	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(h_len);
	if (str == NULL)
	{
		free(str);
		return (0);
	}

	for (i = 0; i < ac; i++)
	{
		w_len = strlen(av[i]);

		str[i] = malloc((w_len * sizeof(char)) + 1);
		if (str[i] == NULL)
		{
			while (i--)
				free(str[i]);
			free(str);
		}

		for (j = 0; j < w_len; j++)
		{
			if (av[i][j] == '\0')
				break;
			str[i][j] = av[i + 1][j];
		}
		str[i][j + 1] = '\n';
	}
	return (*str);
}
