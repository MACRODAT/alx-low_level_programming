#include <stdio.h>

/**
 * print_name - blabla
 * @name: char
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
