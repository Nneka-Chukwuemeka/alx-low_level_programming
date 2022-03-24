#include "main.h"

/**
 * _strcmp - A function that compares strings
 * @s1: A parameter to be include
 * @s2: Second parameter to be included
 *
 * Return: Always return 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
