#include "main.h"

/**
 * _memcpy - A function that copies a string from src into destination
 * until n byte
 * @dest: A parameter that stores the copied data
 * @src: A parameter of string to be copied
 * @n: The size of byte
 *
 * Return: dest copied should be returned
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
