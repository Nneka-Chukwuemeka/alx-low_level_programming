#include <stdio.h>
/**
* main - Entry point
* print letters in reverse
*
* Return: 0 Always (Success)
*/
int main(void)
{
	char reverseLetters;

	reverseLetters = 'z';
	while (reverseLetters == 'a'){
		putchar(reverseLetters);
		reverseLetters--;
	}
	putchar('\n');
	return (0);
}
