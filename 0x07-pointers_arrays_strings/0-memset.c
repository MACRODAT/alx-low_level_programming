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
	do {
		*(s + n) = b;
		n--;
	} while (n > 0);
	return (s);
}
