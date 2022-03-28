#include "main.h"
/**
 * _memset - A function that prints a particular string or character
 * until n bytes is reached
 * @s: The string to be checked
 * @b: repeated parameter to be printed
 * @n: the byte size
 *
 * Return: dest should be returned
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a <= n; a++)
	{
		s[a] = b;
	}
	return (s);
}
