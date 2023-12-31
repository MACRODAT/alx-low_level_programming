#include "main.h"

/**
 * *_strncpy - concats
 * @dest: input string
 * @src: input string
 * @n: number
 * Return: str
 **/
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ = dest;

	if (n < 1)
		return (dest);

	while (*src && (dest - dest_ < n))
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (dest - dest_ < n)
	{
		*dest = '\0';
		dest++;
	}
	return (dest_);
}
