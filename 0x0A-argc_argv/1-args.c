#include <stdio.h>

/**
 * main - A function that counts number of arguments
 * @argc: A parameter that returns number of arguments
 * @argv: An undefined parametrs
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
