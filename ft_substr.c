#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*new_s;
	char			*rtn_str;
	unsigned int	len_s;

	i = 0;
	new_s = (char *) s;
	if (s == NULL)
		return (NULL);
	len_s = (unsigned int)ft_strlen(s);
	if (len_s < start)
	{
		rtn_str = ft_strdup("\0");
		return (rtn_str);
	}
	rtn_str = (char *) malloc (sizeof(char) * (ft_strlen(s) - start + 1));
	if (rtn_str == NULL)
		return (NULL);
	while (i < len && new_s[start] != '\0')
		rtn_str[i++] = new_s[start++];
	rtn_str[i] = '\0';
	return (rtn_str);
}

//L16 new_s[start] != '\0' important
//return (null) if s == NULL to avoid SIGSEGV

/*#include <stdio.h>

int main(void)
{
	char a[] = "\0";
	unsigned int b = 8;
	size_t c = 14;

	printf("%s\n", ft_substr(a, b, c));
}*/
