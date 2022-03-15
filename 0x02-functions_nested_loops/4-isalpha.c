#include "main.h"
/**
* _isalpha - Is a function that prints one when you write the letters
* @c: parameters to include
*
* Return: print 1 when correct and 0 when you have error
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
