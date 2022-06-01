#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (((char *) s2)[j] == '\0')
		return ((char *) s1);
	while (len > 0)
	{
		if (((char *) s1)[i] == ((char *) s2)[j])
		{
			while (((char *) s2)[j] != '\0')
			{
				ft_strchr(&((char *) s1)[i], *(char *) s2);
				i++;
				j++;
				return ((char *) s1 + i - j);
			}
		}
		i++;
		len--;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char a[] = "abcdefgh";
	char b[] = "de";
	size_t	len = 9;

	printf("%s\n", ft_strnstr(a, b, len));
	printf("%s\n", strnstr(a, b, len));
}
*/
