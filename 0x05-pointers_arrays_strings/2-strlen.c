/**
 * reset_to_98 - rst
 * @s: string
 * Returns: length
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return len;
}
