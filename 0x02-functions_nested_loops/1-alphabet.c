#include "main.h"

/**
 * main - Entry point
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	/**
	 * Function:print_alphabet
	 * Returns the smallest alphabet of english letter
	 *
	 * returns: the the letter a to z
	 */
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
