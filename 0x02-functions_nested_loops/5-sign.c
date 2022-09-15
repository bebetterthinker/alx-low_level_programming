#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * print_sign - a function that prints the sign of a number
 * @n: number input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
