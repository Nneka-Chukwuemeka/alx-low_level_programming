#include <stdlib.h>
#include "main.h"

/**
 * create_array - A functions that creates an array
 * and initialize it with a character
 * @size: check the size of the array
 * @c: character
 *
 * Return: 0 if error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (a < size)
	{
		*(p + a) = c;
		a++;
	}
	*(p + i) = '\0';
	return (p);
}
