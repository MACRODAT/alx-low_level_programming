#include "main.h"

/**
 * helper - prints
 * @n: number
 * @i: number
 * Return: an int
*/
int helper(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (-1);
	return (helper(n, i + 1));
}


/**
 * is_prime_number - prints
 * @n: number
 * Return: an int
*/
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (helper(n, 2));
}
