#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
