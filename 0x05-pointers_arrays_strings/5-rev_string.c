#include "main.h"
#include "string.h"

/**
 * rev_string - rev
 * @s: str
**/

void rev_string(char *s)
{
	int i = 0;
	int l = strlen(s);
	int l2 = strlen(s) / 2;
	char tmp;

	while (i >= l2)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
		++i;
	}
}
