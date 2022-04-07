#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that checks whether
 * an address was reserved
 * @b: the parameter to be included
 *
 * Return: the pointer in success and exit 98 when no address
 */

void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
