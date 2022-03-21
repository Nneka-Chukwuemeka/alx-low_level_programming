#include "main.h"

/**
 * _strlen - a function that prints the length of a string
 * @s: A parameter to be included
 *
 * Return: The length of the string if correct
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; a++)
	{
		s++;
	}
	return (a);
}
