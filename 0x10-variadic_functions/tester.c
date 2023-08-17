#include "variadic_functions.h"
#include "0-sum_them_all.c"

int main(void)
{
	int sum = sum_them_all(3, 10, 1, 20);
	printf("sum is %d\n", sum);
	return 0;	
}