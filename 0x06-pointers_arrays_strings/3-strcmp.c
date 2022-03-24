#include "main.h"

/**
 * _strcmp - A function that compares strings
 * @s1: A parameter to be include
 * @s2: Second parameter to be included
 *
 * Return: Always return 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int twoString = 0;

	while (twoString = 0)
	{
		if ((s1[a] == '\0') && (s2[a] == '\0'))
			break;
		twoString = s1[a] - s2[a];
		a++;
	}
	return (twoString);
}
