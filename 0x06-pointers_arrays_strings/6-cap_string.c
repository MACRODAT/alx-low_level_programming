#include "main.h"
/**
 * cap_string - capitalise
 * @str: str
 *
 * Return: cap
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	i = 0;
    if (str[i] >= 97 && str[i] <= 122)
	{
			str[i] = str[i] - 32;
	}
    i = 1;
	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (sep[j] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
