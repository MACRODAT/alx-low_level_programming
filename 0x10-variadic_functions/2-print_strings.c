#include "variadic_functions.h"

/**
 * print_strings - str
 * @separator: sep
 * @n: num
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str && !separator)
			printf("(nil)");
		else if (!str)
			printf("(nil)%s", separator);
		else if (!separator)
			printf("%s", str);
		else if (i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list);
}
