#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - blabla
 * @name: char
 * @f: ptr
*/
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}
