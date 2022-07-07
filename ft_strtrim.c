#include "libft.h"

static size_t	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	trim_word(char *s1, char *s2)
{
	size_t	word;
	size_t	i;

	word = 0;
	i = 0;
	while (s1[i++] != '\0')
	{
		if (is_set(s1[i], s2) == 1)
			word++;
	}
	return (word);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rtn_str;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	rtn_str = (char *) malloc (sizeof(char) * (ft_strlen(s1) \
				- trim_word((char *)s1, (char *)set) + 1));
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

//if set is NULL -> return (s1)

/*#include <stdio.h>

int main(void)
{
	char a[] = "abcd";
	char *b = NULL;

	printf("%s\n", ft_strtrim(a, b));
}*/
