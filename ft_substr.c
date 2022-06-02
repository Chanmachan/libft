#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *new_s;
	char *rtn_str;
	unsigned int	len_s;

	i = 0;
	new_s = (char *) s;
	len_s = ft_strlen(s);
	rtn_str = (char *) malloc (sizeof(char) * (len + 1));
	if (rtn_str == NULL)
		return (0);
	if (start < len_s)
	{
		while (--start)
			new_s++;
		while (len-- && new_s[i] != '\0')
		{
			rtn_str[i] = new_s[i];
			i++;
		}
		rtn_str[i] = '\0';
		return (rtn_str);
	}
	return (NULL);
}

//L13 (len + 1) bracket needed
//L20 new_s[i] != '\0' important

/*
#include <stdio.h>

int main(void)
{
	char a[] = "     abc defg hi";
	unsigned int b = 5;
	size_t c = 1000;

	printf("%s", ft_substr(a, b, c));
}
*/