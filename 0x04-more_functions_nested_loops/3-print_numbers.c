#include "main.h"

/**
 * print_numbers - print numbers from zero to 9
 *
 * Return:result 1 if true
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
