#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @ab:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
