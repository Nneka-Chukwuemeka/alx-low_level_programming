#include <stdio.h>
/**
* main - Printing all 3 combinations of numbers with putchar
*
* Return: 0 Always (Success)
*/
int main(void)
{
	int numOne, numTwo, numThree

		for (numOne = 48; numOne <= 57; numOne++)
		{
			for (numTwo = 49; numTwo <= 57; numTwo++)
			{
				for (numThree = 50; numThree  <= 57; numThree++)
				{
					if (numThree > numTwo && numTwo > numOne)
					{
						putchar(numOne);
						putchar(numTwo);
						putchar(numThree);
						if (numTwo != 56 || numOne != 55)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
			putchar('\n');
			return (0);
		}
}
