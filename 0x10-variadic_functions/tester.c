#include "variadic_functions.h"

int main(void)
{
	char *sep = NULL;

	print_strings(sep, 3, NULL, "nice to meet yiy", "bye");
	return 0;	
}