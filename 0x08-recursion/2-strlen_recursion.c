#include "main.h"

/**
 * _strlen_recursion - A function that print the length of a string
 * @s: The string to be counted
 *
 * Return: The number of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count = _strlen_recursion(s + 1);
		count++;
		return (count);
	}
}
