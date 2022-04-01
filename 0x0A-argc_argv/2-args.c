#include <stdio.h>

/**
 * main - A function that prints all the arguments in a string with a new line
 * @argc: A parameter that counts arguments
 * @argv: A parameter that stores the arguments
 *
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
