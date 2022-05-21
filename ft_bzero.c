void	ft_bzero(void *s, int n)
{
	int i;

	n = 0;
	i = 0;
	while (i < n)
	{
		s = '\0';
		i++;
	}
}
