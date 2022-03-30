#include "main.h"

/**
 * _pow_recursion - A function that prints the x power y
 * @x: It is the parameter to find its power
 * @y: Parameter for the power of x
 *
 * Return: x raised to power y if > than 0;
 */

_pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
