#include "main.h"

/**
 * main - main fct
 * Returns: 0
 */

int main(void)
{
	char *s = "_putchar\n";
	
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	return (0);
}

