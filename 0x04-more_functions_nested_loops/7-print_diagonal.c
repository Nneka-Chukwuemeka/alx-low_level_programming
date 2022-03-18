#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: include the parameter
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count, space;

		for (count = 0; count < n; count++)
		{
			for (space = 0; space < n; space++)
			{
				if (space == count)
				{
					_putchar('\\');
				}
				else if (space < count)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}

	}
}
