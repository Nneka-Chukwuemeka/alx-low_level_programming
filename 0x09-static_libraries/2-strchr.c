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
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
