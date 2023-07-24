#include "main.h"

/**
 * _puts - ret
 * @str: param1
*/
void _puts(char *str)
{
	str = &str[0];
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}