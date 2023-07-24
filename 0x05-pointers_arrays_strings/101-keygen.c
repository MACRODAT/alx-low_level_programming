#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gemerator
 * Return: 0
**/

int main(void)
{
	int tot;
	char c;

	srand(time(NULL));
	tot = 0;
	while (tot <= 2645)
	{
		c = rand() % 128;
		tot += c;
		putchar(c);
	}
	putchar(2772 - tot);
	return (0);
}
