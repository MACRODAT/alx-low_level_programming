#include "main.h"
/**
 * leet - 1337
 * @str: str
 *
 * Return: $+r
 */
char *leet(char *str)
{
	int i, j;
	char chr[] = "aAeEoOtTlL";
	char rep[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (chr[j] != '\0')
		{
			if (str[i] == chr[j])
			{
				str[i] = rep[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
