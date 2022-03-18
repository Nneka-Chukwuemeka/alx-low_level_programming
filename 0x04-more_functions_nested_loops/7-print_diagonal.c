#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: include the parameter
*/
void print_diagonal(int n)
{
	int count, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < n; space)
			{
				if (count == space)
				{
					_putchar('\\');
				}
				else if
				{
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
}
