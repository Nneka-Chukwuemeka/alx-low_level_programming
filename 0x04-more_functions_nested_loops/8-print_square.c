#include "main.h"

/**
 * print_square - print square with #
 * @size: it include parameters
*/
void print_square(int size)
{
	int i, int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (j == i)
				{
					_putchar('#');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
