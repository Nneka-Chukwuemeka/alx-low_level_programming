#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Print all lower case
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
}
