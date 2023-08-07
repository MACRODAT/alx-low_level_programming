#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates str
 * @str: int
 *
 * Return: char
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0;
	unsigned int _len = 0;

	if (!str)
		return (NULL);
	while (str[i++])
		;
	_len = i;
	dup = malloc(sizeof(*str) * _len);
	i = 0;
	while (i < _len)
	{
		dup[i] = str[i];
	}
	return (dup);
}
