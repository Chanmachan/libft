#include "libft.h"

size_t	count_array(char *str, char word)
{
	size_t	i;
	size_t	num_array;

	i = 0;
	num_array = 0;
	while (str[i] != '\0')
	{
		if (str[i] == word)
			num_array++;
		i++;
	}
	return (num_array + 1);
}

size_t	count_len(char *str, char word)
{
	size_t	i;

	i = 0;
	while (str[i] != word && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_mystrdup(char *str, size_t len)
{
	size_t	i;
	char	*rtn_str;

	rtn_str = (char *) malloc (sizeof(char) * (len + 1));
	if (rtn_str == NULL)
		return (NULL);
	i = 0;
	while (i < len && str[i] != '\0')
	{
		rtn_str[i] = str[i];
		i++;
	}
	rtn_str[i] = '\0';
	return (rtn_str);
}

char	**ft_split(char const *s, char c)
{
	char	*new_s;
	char	**rtn_str;
	size_t	i;
	size_t	array;

	new_s = (char *) s;
	i = 0;
	array = count_array(new_s, c);
	rtn_str = (char **) malloc (sizeof(char *) * array + 1);
	if (rtn_str == NULL)
		return (NULL);
	while (i < array)
	{
		rtn_str[i] = ft_mystrdup(new_s, count_len(new_s, c));
		new_s = new_s + count_len(new_s, c) + 1;
		i++;
	}
	return (rtn_str);
}

//how to use free func
//L64 +1 means to skip
/*
#include <stdio.h>

int main(void)
{
	char	a[] = "abc def ghi";
	char	b = ' ';

	char	**c = ft_split(a, b);
	printf("%s\n", c[0]);
	printf("%s\n", c[1]);
	printf("%s\n", c[2]);
	printf("%s\n", c[3]);
	printf("%s\n", c[4]);
}
*/
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "/42//T//okyo// Piscine//Libft";
	char	c = '/';
	char	**sep_str;
	char	**tmp_sep_str;
	char	**tmp2_sep_str;

	if (!(sep_str = ft_split(src, c)))
		return (0);
	tmp_sep_str = sep_str;
	tmp2_sep_str = sep_str;
	while (*sep_str)
		printf("%s\n", *sep_str++);
	while (*tmp_sep_str)
		free(*tmp_sep_str++);
	free(*tmp_sep_str);
	free(tmp2_sep_str);
	return (0);
}
*/