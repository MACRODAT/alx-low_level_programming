#include "main.h"

/**
* _strstr - finder
* @haystack: chr
* @needle: chr
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack)
	{
		i = 0;
		while (needle[i] && needle[i] == *(haystack + i))
			i++;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (0);
}
