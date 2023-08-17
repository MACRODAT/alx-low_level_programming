#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: num
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list lst;

	va_start(lst, n);
	while (i < n)
	{
		sum += va_arg(lst, int);
		i++;
	}

	va_end(lst);

	return (sum);
}
