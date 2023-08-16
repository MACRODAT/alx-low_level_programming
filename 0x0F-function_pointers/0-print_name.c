#include <stdio.h>

/**
 * print_name - blabla
 * @name: char
 * @f: ptr
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
