#include <stdio.h>

/**
 * main - A function that mutliplys two numbers only
 * @argc: Parameter count
 * @argv: argument storage
 *
 * Return: 0 in success and 1 in error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1] * atoi(argv[2]));
	return (0);
}
