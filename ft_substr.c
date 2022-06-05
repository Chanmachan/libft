#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *new_s;
	char *rtn_str;

	i = 0;
	new_s = (char *) s;
	rtn_str = (char *) malloc (sizeof(char) * (len + 1));
	if (rtn_str == NULL)
		return (NULL);
	while (i < len)
	{
		rtn_str[i++] = new_s[start++];
	}
	rtn_str[i] = '\0';
	return (rtn_str);
}

//L16 new_s[start] != '\0' important

/*
#include <stdio.h>

int main(void)
{
	char a[] = "tripouille";
	unsigned int b = 100;
	size_t c = 1;

	printf("%s\n", ft_substr(a, b, c));
}
*/