#include "main.h"

/**
 * _strcmp - concats
 * @s1: input string
 * @s2: input string
 * Return: str
 **/    
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return *s1 - *s2;
		s1++;
		s2++;
	}
	if (!s2)
		return -1;
	return 0;
}
