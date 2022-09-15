#include "main.h"

/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 * _isalpha - a function that checks for alphabetic character
 *  @c: single letter input
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
