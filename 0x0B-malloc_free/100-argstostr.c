#include <stdlib.h>
#include "main.h"

/**
 * argstostr - frees
 * @ac: grid
 * @av: height
 * Return: n
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	char *s;
	int size = 0;
	int it = 0;
	int i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	ptr = *av;
	while (it < ac)
	{
		ptr = av[it];
		while (*ptr++)
		{
			size++;
		}
		size++;
		it++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	it = 0;

	while (it < ac)
	{
		ptr = av[it];
		while (*ptr)
		{
			s[i] = *ptr;
			i++;
			ptr++;
		}
		s[i++] = '\n';
		it++;
	}
	s[i] = '\0';
	return (s);
}
