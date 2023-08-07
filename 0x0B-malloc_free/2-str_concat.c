#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - creates str
 * @s1: int
 * @s2: int
 *
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	unsigned int i = 0;
	char *ret;

	while (s1 && s1[size1++])
		;
	while (s2 && s2[size2++])
		;
	ret = malloc(sizeof(char) * (size1 + size2 - 1));
	if (!ret)
		return (NULL);
	while (size1 && i < size1)
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	if (size1 > 0)
		size1--;
	while (size2 && i < size2)
	{
		ret[i + size1] = s2[i];
		i++;
	}
	return (ret);
}
