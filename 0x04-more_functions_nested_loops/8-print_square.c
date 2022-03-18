#include "main.h"

/**
 * print_square - print square with #
 * @size: it include parameters
*/
void print_square(int size)
{
	int i, int j;

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
