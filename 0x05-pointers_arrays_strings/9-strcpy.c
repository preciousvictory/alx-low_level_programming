#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src
 * , including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: string
 * @src: string
 *
 * Return: Return value: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (*(src + i) == '\0')
	{
		break;
	}

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
