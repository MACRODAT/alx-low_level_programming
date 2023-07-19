#include "main.h"

/**
 * _islower - main fct
 * @c: char
 * Return: 0
 */

int  _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
