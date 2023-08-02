#include "main.h"


/**
 * _strlen_recursion - len
 * @s: s
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0' || *s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * helper - checks
 * @s: string 
 * @i: int
 * @len: length - int
 *
 * Return: 1
 */
int helper(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (helper(s, i + 1, len - 1));
}


/**
 * is_palindrome - palindrome
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (helper(s, 0, _strlen_recursion(s)));
}
