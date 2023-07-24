#include "main.h"
#include "string.h"

/**
 * rev_string - rev
 * @s: str
**/

void rev_string(char *s)
{
	int l = strlen(s);
	int l2 = strlen(s) / 2;
	int i = l - 1;
	char tmp;

	while (i >= l2)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
		--i;
	}
}
