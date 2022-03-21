#include "main.h"
/**
 * _puts - prints the string
 * @str: interger to be included
 *
 * Return: Nothing to return
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
