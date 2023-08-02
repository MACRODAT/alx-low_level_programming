#include "main.h"

/**
 * _pow_recursion - prints
 * @x: number
 * @y: number
 * Return: an int
*/
int _pow_recursion(int x, int y);
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	if (n <= 2)
		return (n);
	return (n * factorial(n - 1));
}
