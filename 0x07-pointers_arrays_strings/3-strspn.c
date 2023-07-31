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
	unsigned int i = 0;

	while (s[i] && accept[i] && s[i] == accept[i])
	{
		i++;
	}
	return (i);
}
