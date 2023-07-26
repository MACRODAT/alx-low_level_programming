#include "main.h"

/**
 * *_strcat - concats
 * @dest: input string
 * @src: input string
 * Return: str
 **/
char *_strcat(char *dest, char *src)
{
	int cnt = 0;

	while (*dest)
	{
		cnt++;
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;cnt++;
	}
	*dest = '\0';

	return dest - cnt;
}
