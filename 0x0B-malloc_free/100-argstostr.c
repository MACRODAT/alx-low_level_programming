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
	if (ac == 0 || av == NULL)
		return (NULL);

	char *ptr = *av;
	char *s;
	int size = 0;
	int it = 0;

	while (it < ac)
	{
		ptr = av[it];
		while (*ptr++)
		{
			size++;
		}
		it++;
	}
	s = malloc(sizeof(char) * size + 1);
	it = 0;
	int i = 0;

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
	return (s);
}
