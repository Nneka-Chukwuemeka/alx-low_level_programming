#include <stdio.h>
/**
* main - Entry point
* prints lowercase letters
*
* Return: 0 Always (Success)
*/
int main(void)
{
	char lowerCase;

	lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	return (0);
}
