#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;
	int	len_s_tmp;
	int	i;
	char	*new_s;

	new_s = (char *) s;
	len_s = ft_strlen(s);
	len_s_tmp = len_s;
	i = 0;
	while (len_s > 0)
	{
		if (new_s[len_s] == (char) c)
		{
			return (new_s + len_s_tmp - i);
		}
		len_s--;
		i++;
	}
	if ((char) c == '\0')
		return (new_s + len_s_tmp + 1);
	return (0);
}

//L38,39 plus one to return ('\0')

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "aebcedefg";
	int b = '\0';

	printf("%s\n", ft_strrchr(a, b));

	char c[] = "aebcedefg";
	int d = '\0';

	printf("%s\n", strrchr(c, d));
}
*/