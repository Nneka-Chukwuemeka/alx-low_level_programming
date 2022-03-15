#include "main.h"
/**
* print_sign - Print the values with signs
* @n: The interger present
*
* Return: Success returns 0 and 1, error returns a negative 1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
