#include <stdlib.h>
#include "main.h"

/**
 * _calloc - A function that allocates memmory to an array
 * @nmemb: The array of characters
 * @size: The byte size
 *
 * Return: returns the array in success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	point = malloc(nmemb * size);

	if (point == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); i++)
		point[a] = 0;

	return (point);
}
