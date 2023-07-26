#include "main.h"
/**
 * rot13 - encoder
 * @str: str
 *
 * Return: out
 */
char *rot13(char *str)
{
	int i, j;

	char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (org[j] != '\0')
		{
			if (str[i] == org[j])
			{
				str[i] = rep[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
