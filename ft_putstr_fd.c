#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t 	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
int main(void)
{
	ft_putstr_fd("123", 1);
}
 */