/**
 * _reverse_string - reverses a string
 * @s: string to reverse
 *
 * Return: length
*/
unsigned int _reverse_string(char *s)
{
	int len = 0, i = 0, _len;
	char tmp;

	while (s[len + 1])
		len++;
	_len = len;
	while (len > _len / 2)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i++] = tmp;
		len--; 
	}

	return (_len);
}

/**
 * _cp_string - copies a string
 * @s: source const
 *
 * Return: length
*/
char *_cp_string(const char *s)
{
	unsigned int _len = 0, i = 0;
	char *d;

	while (s[_len + 1])
		_len++;
	d = (char *)malloc(sizeof(char) * _len);
	while (i <= _len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}