#include "main.h"

/**
 * helper - prints
 * @n: number
 * @i: number
 * Return: an int
*/
int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper(n, i + 1));
}


/**
 * _sqrt_recursion - prints
 * @n: number
 * Return: an int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
