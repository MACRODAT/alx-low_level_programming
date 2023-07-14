#include <stdio.h>

/**
 * main - alphabet
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 0 ; ch <= 9 ; ch++)
	{
		putchar('0' + ch);
	}
	putchar('\n');

	return (0);
}
