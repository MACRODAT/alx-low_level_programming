#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finder
 * @s: string
 * @c: char
 *
 * Return: ptr
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
