#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: parameter to be included
 * @n: parameter to be included
 * Return: Nothing to return
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", *(a + b));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
