#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Print all lower case
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		_putchar(lowerCase);
		lowerCase++;
	}
	_putchar('\n');
	return (0);
}
