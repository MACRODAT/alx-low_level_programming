#include "main.h"

/**
 * _strlen_recursion - prints
 * @s: char
 * Return: an int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0' || *s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
