#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	new_s1 = (unsigned char *) s1;
	new_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n && s1[i] == s2[i] && new_s1[i] != '\0' && new_s1[i] != '\0')
		i++;
	if ((new_s1[i] - new_s2[i]) > 0)
		return (1);
	if ((new_s1[i] - new_s2[i]) < 0)
		return (-1);
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_strncmp("BCCDE", "ABE", 4));
	printf("%d\n", strncmp("BCCDE", "ABE", 4));
}
*/