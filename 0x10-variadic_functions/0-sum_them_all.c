#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all values
 * @n: first parameter to be included
 *
 * Return: the sum or 0 if n=0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add_up;
	unsigned int a;
	int count = 0;

	va_start(add_up, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		count += va_arg(add_up, int);
	}
	va_end(add_up);

	return (count);
}
