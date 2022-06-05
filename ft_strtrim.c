#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rtn_str;
	size_t	i;
	size_t	j;

	rtn_str = (char *) malloc (sizeof(char) * (ft_strlen(s1) + 1));
	if (rtn_str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (((char *) s1)[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == 0)
			rtn_str[j++] = s1[i++];
		else
			i++;
	}
	rtn_str[j] = '\0';
	return (rtn_str);
}

/*
#include <stdio.h>

int main(void)
{
	char a[] = "   xxxtripouille   xxx";
	char b[] = " x";

	printf("%s\n", ft_strtrim(a, b));
}
*/