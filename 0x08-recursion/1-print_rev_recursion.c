#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: the parameter of string to be reversed
 *
 * Return: Nothing to return
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
