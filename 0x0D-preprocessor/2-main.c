#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from,
 * followed by a new line.
 * @argc: argument count
 * @argv: argumnt vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", __FILE__);
	return (0);
}
