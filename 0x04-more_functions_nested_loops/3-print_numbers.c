#include "main.h"

/**
 * print_numbers - print numbers from zero to 9
 *
 * Return:result 1 if true
*/
void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
