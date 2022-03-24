#include "main.h"

/**
 * _strncat - A function that concatinate two strings depending
 * on the length of n
 * @dest: A string parameter to be included
 * @src: A string parameter to be included
 * @n: The interger that determine the length of src
 *
 * Return: Result will return Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (a != '\0')
	{
		dest[a];
		a++;
	}
	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
