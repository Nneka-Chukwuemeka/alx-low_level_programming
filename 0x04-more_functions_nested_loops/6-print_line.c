#include "main.h"

/**
 * print-line - print a line 
 * @n: included parameter
*/
void print_line(int n)
{
	int i;

	if(n > 0)
	{
		for(i = 0; i <= n; i++)
		{
			_putchar('-');
		}
		else
		{
			_putchar('\n');
		}
	}
}
