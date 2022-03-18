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
			space = n;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
