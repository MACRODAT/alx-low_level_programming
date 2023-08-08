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
	int i = 0, j = 0, tmp = 0, y = 1, size = 0, words_l = 0;

	if (str == NULL)
		return (NULL);
	while (str[i++])
	{
		size++;
		if (str[i] == ' ' && !y++)
			words_l++;
		else
			y = 0;
	}
	if (y == 0)
		words_l++;
	if (!words_l)
		return (NULL);
	i = 0;
	words = malloc((words_l + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (str[j++] == ' ')
		i = 0;
	tmp = --j;
	while (i < words_l)
	{
		while (str[j++] != ' ')
			;
		words[i] = malloc((j - tmp + 1) * sizeof(char));
		if (!words[i])
			return (NULL);
		y = 0;
		while (str[tmp] != ' ')
			words[i][y++] = str[tmp++];
		words[i][y] = '\0';
		while (str[j++] == ' ')
			;
		tmp = --j;
		i++;
	}
	words[i] = '\0';
	return (words);
}
