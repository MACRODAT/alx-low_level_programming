#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - str plys str
 * @s1: f
 * @s2: s
 * @n: nbr
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, _l1 = 0, _l2 = 0;

	while (s1 && s1[_l1])
		_l1++;
	while (s2 && s2[_l2])
		_l2++;

	if (n >= _l2)
		s = malloc(sizeof(char) * (_l1 + _l2 + 1));
	else
		s = malloc(sizeof(char) * (_l1 + n + 1));
	if (!s)
		return (NULL);
	while (i < _l1)
	{
		i++;
		s[i] = s1[i];
	}
	while (i < (_l1 + n) && n < _l2)
		s[i++] = s2[j++];
	while (i < (_l1 + _l2) && n >= _l2)
		s[i++] = s2[j++];
	s[i] = '\0';

	return (s);
}
