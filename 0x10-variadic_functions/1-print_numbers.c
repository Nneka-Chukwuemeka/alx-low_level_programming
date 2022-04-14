#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers with a new line
 * @separator: A string that seperates the numbers
 * @n: The number of parameter to print
 *
 * Return: the value if true and exit if false
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(list);
	unsigned int a;

	va_start(list, n);
	if (n != 0)
	{
		for (a = 0; (a < n-1); a++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(list, int), separator);
			}
			else
			{
				printf("%d", va_arg(list, int));
			}
		}
		printf("%d", va_arg(list, int));
		va_end(list);
	}
	printf("\n");
}
