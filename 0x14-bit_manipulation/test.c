#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "0-binary_to_uint.c"
#include "0-binary_to_uint2.c"
#include "1-print_binary.c"
#include "2-get_bit.c"
#include "2-get_bit2.c"
#include "3-set_bit.c"
#include "4-clear_bit.c"
#include "5-flip_bits.c"
#include "helper.c"

int main(void)
{
	int d1 = 0x89;
	char *s = 0;

	s = malloc(sizeof(char) * 20);

	printf("%d %x", d1, d1);
	return (0);

	const char* b1 = "111011010100011";
	unsigned int u = 18;
	int res = 0, i = 0;

	while (d1)
	{
		s[i++] = '0' + d1 % 2;
		d1 = d1 >> 1;
	}
	s[i] = 0;
	printf("%s", s);
	
	return (0);
}