#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input
 *
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;

	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar("\n");
}

