#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (n == 0)
	{
		return (len_src);
	}
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "abcdefg";
	char b[] = "   ";

	printf("%zu\n", ft_strlcpy(a, b, 0));
	printf("%zu\n", strlcpy(a, b, 0));
}
*/

//L22 cafeful
//use libft.h to delete ft_strlen func