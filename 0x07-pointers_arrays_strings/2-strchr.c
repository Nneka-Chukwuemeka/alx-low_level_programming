#include "main.h"

/**
 * _strchr - A function that returns immediately a character in c
 * is seen in s
 * @s: A parameter of strings
 * @c: A parameter of strings to check with s
 *
 * Return: Return s if true and Null if false
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		n = *s++;
		if (n == c)
			return (s - 1);
		if (n == 0)
			return (NULL);
	}
}
