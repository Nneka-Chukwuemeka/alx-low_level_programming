#include <stdio.h>
/**
* main - print all the two cobinations with putchar
*
* Return: 0 Always (Success)
*/
int main(void)
{
	int firstNum, secondNum;

	firstNum = 48;
	while (firstNum <= 56)
	{
		secondNum = 49;
		while (secondNum <= 57)
		{
			if (firstNum < secondNum)
			{
				putchar(firstNum);
				putchar(secondNum);
				if (firstNum != 56 || secondNum != 57)
				{
					putchar(',');
					putchar('');
				}
			}
			secondNum++;
		}
		firstNum++;
	}
	putchar('\n');
	return (0);
}
