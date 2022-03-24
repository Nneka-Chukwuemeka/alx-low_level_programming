#include "main.h"

/**
 * _strncpy - A function that copys one string into another
 * with a condition of n
 * @dest: The destination parameter
 * @src: The source parameter
 * @n: The string length
 *
 * Return: Dest will be returned
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	a = 0;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
