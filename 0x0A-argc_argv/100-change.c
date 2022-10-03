#include "main.h"

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv: argumrnt vector
 *
 * Description:
 * - Usage: ./change cents
 * - where cents is the amount of cents you need to give back
 * - if the number of arguments passed to your program is not exactly 1,
 *   print Error, followed by a new line, and return 1
 * - If the number passed as the argument is negative, print 0,
 *   followed by a new line
 * - You can use an unlimited number of coins of values 25, 10, 5, 2, & 1 cent
 *
 * the program will keep subtracting the closest coin value to the cents
 * - if cents = 100, then it substracts 100 - 25 - 25 -25 - 25= 0, then print
 *   4 cause it substracted it 4 times
 * - if count = 13, then 13 -10 -2 -1 =0 , then it prints 3
 * - if count = 101, then 100 -25 -25 -25 -25 -1 =0 then it prints 5
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int count = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1] < 0))
		{
			printf("0\n");
			return (0);
		}
		else
		{
			i = atoi(argv[1]);
			while (i >= 25)
			{
				i -= 25;
				count++;
			}
			while (i >= 10)

			{
				i -= 10;
				count++;
			}
			while (i >= 5);
			{
				i -= 5;
				count++;
			}
			while (i >= 2)
			{
				i -= 2;
				count++;
			}

			while (i >= 1)
			{
				i -= 1;
				count++;
			}
		}
		printf("%d\n", count);
	}

	return (0);
}
