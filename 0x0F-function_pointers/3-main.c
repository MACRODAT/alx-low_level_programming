#include "3-calc.h"
#include <string.h>

/**
 * main - fct
 * @argc: count
 * @argvs: arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, r;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	r = f(a, b);
	printf("%d\n", r);

	return (0);
}
