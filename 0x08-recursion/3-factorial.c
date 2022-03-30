#include "main.h"

/**
 * factorial - Write a function that prints the factorial of a number
 * @n: The parameter to be included
 *
 * Return: return the value of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
