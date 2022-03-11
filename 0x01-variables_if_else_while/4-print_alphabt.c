#include <stdio.h>
/**
* main - Entry point
* print all letters except e and q
*
* Return: 0 Always (Success)
*/
int main(void)
{
	char lowerCaseNoeq;

	lowerCaseNoeq = 'a';
	while (lowerCaseNoeq <= 'z')
	{
		if(lowerCaseNoeq != 'e') && (lowerCaseNoeq != 'q')
		{
			putchar(lowerCaseNoeq);
		}
	}
	putchar('\n');
	return (0);
}
