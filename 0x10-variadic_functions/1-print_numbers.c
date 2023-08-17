#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: sep
 * @n: num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		if (!separator)
			printf("%d", x);
		else if (i == 0)
			printf("%d", x);
		else
			printf("%s%d", separator, x);
	}
	printf("\n");
	va_end(list);
}
