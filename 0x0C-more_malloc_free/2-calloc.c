#include <stdlib.h>
#include "main.h"

/**
 * *_memset - n
 * @s: area
 * @b: chr
 * @n: tns
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - mem
 * @nmemb: n
 * @size: sz
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p2 = malloc(size * nmemb);
	if (p2 == NULL)
		return (NULL);
	_memset(p2, 0, nmemb * size);

	return (p2);
}
