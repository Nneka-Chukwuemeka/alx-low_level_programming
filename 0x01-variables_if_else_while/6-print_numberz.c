#include <stdio.h>
/**
* main - Entry point
* print numbers from 0 to 9 with putchar
*
* Return: 0 Always (Success)
*/
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
