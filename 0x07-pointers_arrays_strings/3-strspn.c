#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string with lst
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j] && accept[j] != s[i])
			j++;
		if (!accept[j])
			return (i - 1);
		i++;
	}
	return (i);
}
