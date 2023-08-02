#include "main.h"

/**
 * factorial - prints
 * @n: char
 * Return: an int
*/
int factorial(int n)
{
	if (n == 2)
		return (2);
	return (n * factorial(n - 1));
}
