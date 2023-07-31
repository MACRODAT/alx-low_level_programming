#include "main.h"

/**
 * *_memset - fills memory
 * @s: area
 * @b: char
 * @n: number
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n >= 0)
	{
		*(s + n) = b;
		n--;
	}
	return (s);
}
