#include <stdlib.h>
#include "main.h"

/**
 * strtow - frees
 * @str: grid
 * Return: n
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, tmp = 0, y = 0;
	int size = 0, words_l = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	y = 1;
	while (str[i++])
	{
		size++;
		if (str[i] == ' ')
		{
			if (!y)
				words_l++;
			y = 1;
		}
		else
		{
			y = 0;
		}
	}
	if (!words_l)
		return (NULL);
	i = 0;
	words = malloc((words_l + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (str[j++] == ' ')
			;
	j--;
	tmp = j;
	while (i < words_l)
	{
		while (str[j++] != ' ')
			;
		words[i] = malloc((j - tmp + 1) * sizeof(char));
		if (!words[i])
			return (NULL);
		y = 0;
		while (str[tmp] != ' ')
		{
			words[i][y] = str[tmp];
			tmp++;
			y++;
		}
		words[i][y] = '\0';
		while (str[j++] == ' ')
			;
		j--;
		tmp = j;
		i++;
	}
	words[i] = '\0';
	return (words);
}
