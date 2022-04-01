#include "main.h"
/**
* main - Print putchar in the main
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int arry[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int arryLength = sizeof(arry) / sizeof(int);
	int i;

	for (i = 0; i < arryLength; i++)
	{
		_putchar(arry[i]);
	}
	_putchar('\n');

	return (0);
}
