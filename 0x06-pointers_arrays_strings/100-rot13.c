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

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = (str[i] - 65 + 13) % 25;
			str[i] += 65;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = (str[i] - 97 + 13) % 25;
			str[i] += 97;
		}
		i++;
	}
	return (str);
}
