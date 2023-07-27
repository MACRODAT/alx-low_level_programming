#include "main.h"

/**
 * infinite_add - adder
 * @n1: frst
 * @n2: sec
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int carry = 0;
	char s1[size_r], s2[size_r];
	int flag1 = 0;
	int flag2 = 0;
	char res[size_r];

	for (i = 0; i < size_r; ++i)
	{
		if (!flag1 && n1[i] == '\0')
			flag1 = i;
		if (flag1 > 0)
			s1[i] = '\0';
		else
			s1[i] = n1[i];
		if ((i == size_r - 1) && !n1[i + 1] && flag1 == 0)
			return (0);
	}
	for (i = 0; i < size_r; ++i)
	{
		if (!flag2 && n2[i] == '\0')
			flag2 = i;
		if (flag2 > 0)
			s2[i] = '\0';
		else
			s2[i] = n2[i];
		if ((i == size_r - 1) && !n2[i + 1] && flag2 == 0)
			return (0);
	}

	r[size_r] = '\0';
	for (i = 0; i < size_r; ++i)
	{
		if (flag1 - 1 - i >= 0)
			carry += (s1[flag1 - 1 - i] - '0');
		if (flag2 - 1 - i >= 0)
			carry += (s2[flag2 - 1 - i] - '0');
		*(res  + size_r - 1 - i) = '0' + carry % 10;
		if (i != size_r - 1)
			carry = carry / 10;
	}
	if (carry > 0)
		return (0);
	i = 0;
	carry = 0;
	flag1 = 0;
	while (i < size_r)
	{

		if (res[i] >= '0' && res[i] <= '9')
			if (res[i] >= '1')
			{
				flag1 = 1;
			}
			if (flag1)
			{
				r[carry] = res[i];
				carry++;
			}
		i++;
	}
	r[i] = '\0';
	return (r);
}
