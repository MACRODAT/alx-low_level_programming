#include "main.h"

/**
 * _atoi - cvt
 * @s: str
 *Return: return int
 */

int _atoi(char *s)
{
	int sgn = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
		{
			sgn *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (*s - '0') + (n * 10);
		}
		else if (n > 0)
		{
			/* break if we have a number and char not valid */
			break;
		}
	} while (*s++);

	return (n * sgn);
}
