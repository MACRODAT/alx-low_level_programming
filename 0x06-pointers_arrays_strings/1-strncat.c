#include "main.h"
#include <string.h>

/**
 * *_strncat - concats
 * @dest: input string
 * @src: input string
 * @n: number
 * Return: str
 **/
char *_strncat(char *dest, char *src, int n)
{
	int cnt = 0;
	int cntb = 0;

	while (*dest)
	{
		cnt++;
		dest++;
	}
	while (*src && cntb < n)
	{
		*dest = *src;
		src++;
		dest++;cntb++;
	}
	cnt += cntb;
	*dest = '\0';
	return dest - cnt;
}
