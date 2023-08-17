#include "variadic_functions.h"

int main(void)
{
	char *sep = NULL;

	print_strings(sep, 3, "hello world", "nice to meet yiy", "bye");
	return 0;	
}