#include "main.h"

/**
 * factorial - prints
 * @n: char
 * Return: an int
*/
int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	if (n <= 2)
		return (n);
	return (n * factorial(n - 1));
}
