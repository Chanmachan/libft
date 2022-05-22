void	ft_memset(void *s, int c, unsigned n)
{
	unsigned char *new_s;
	unsigned char uc;
	int i;

	uc = c;
	i = 0;
	while (i < n)
	{
		new_s[i] = uc;
		i++;
	}
	return (s);
}

// why return (s)?