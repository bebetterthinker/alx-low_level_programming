#include "main.h"

/*
 * _strdup- returns pointer to newlly allocated pointer
 * #str:string to be occupied
 *
 * Return:Null incase the error is occured
 */
char *_strdup(char *str)
{
	char *cp;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cp = mall0c(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		cp[index] = str[index];
	}

	cp[len] = '\0';

	return (cp);
}
