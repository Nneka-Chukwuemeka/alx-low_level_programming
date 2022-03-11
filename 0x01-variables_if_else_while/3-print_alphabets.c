#include <stdio.h>
/**
* main - Entry point
* print lower case and uppercase letters
*
* Return: 0 Always (Success)
*/
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	i = 'A';
	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
