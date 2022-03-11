#include <stdio.h>
/**
* main - Entry point
* print nos 1 to 9
*
* Return: 0 Always (Success)
*/
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d\n", num);
		num++;
	}
	return (0);
}
