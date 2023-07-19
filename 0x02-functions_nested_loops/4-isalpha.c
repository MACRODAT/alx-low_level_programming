#include "main.h"

/**
 * _isalpha - main fct
 * @c: char
 * Return: 0
 */

int  _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
