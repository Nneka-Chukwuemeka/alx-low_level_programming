#include "main.h"

/**
 * print-line - print a line 
 * @n: included parameter
*/
void print_line(int n)
{
	if(n > 0)
	{
		int i; 

		for (i = 0; i <= n; i++)
		{
			_putchar('-');
		}
		else
		{
			_putchar('\n');
		}
	}
}
