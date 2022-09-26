#include "main.h"

/**
 * _memcpy -copies of the memory areas
 * @dest: memeory areas to occupied to
 * @dest:memory area that can occupied from
 * @n:number of bytes to be occupied
 *
 * Return: pointer to the occupied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
