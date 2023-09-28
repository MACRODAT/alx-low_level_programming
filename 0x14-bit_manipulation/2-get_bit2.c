int get_bit2(unsigned long int n, unsigned int index)
{
	int i = 0;
	for (unsigned int tmp = n; tmp > 0; tmp>>=1)
		if (i++ == index)
			return (tmp & 1); 
}