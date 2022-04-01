#include "main.h"

/**
 * _strcat - A function that concatenate strings
 * @dest: A string parameter
 * @src: A string parameter
 *
 * Return: Result is dest
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m] = src[n];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
