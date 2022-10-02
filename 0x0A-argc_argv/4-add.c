#include "main.h"
#include <stdio.h>
#include <tsdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int  a = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (0);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a + = atoic(argv[i];
	}

	printf("%d\n", a);

	return (0);
}
