#include "main.h"

/**
 * swap_int - To swap the value of a and b
 * @a: interger needed
 * @b: interger to be included
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
