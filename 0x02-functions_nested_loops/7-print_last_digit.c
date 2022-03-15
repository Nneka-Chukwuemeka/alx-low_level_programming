#include "main.h"
/**
* print_last_digit - printing the last number
* @a: it is the parameter of the function
*
* Return: Always return 1 (Success)
*/
int print_last_digit(int a)
{
	int last = (a % 10);

	if (last < 0)
	{
		last *= -1;
		_putchar(last + '0');
	}
	return (last);
}
