#include "main.h"

/**
 * _strncat - A function that concatinate two strings depending
 * on the length of n
 * @dest: A string parameter to be included
 * @src: A string parameter to be included
 * @n: The interger that determine the length of src
 *
 * Return: Result will return Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n; b++)
	{
		if (src[b] == '\0')
			break;
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
