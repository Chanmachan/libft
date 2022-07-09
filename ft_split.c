/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hommayunosuke <hommayunosuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:13:54 by hommayunosu       #+#    #+#             */
/*   Updated: 2022/07/08 01:13:55 by hommayunosu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_array(char const *str, char word)
{
	size_t	i;
	size_t	num_array;

	i = 0;
	num_array = 0;
	while (str[i] != '\0')
	{
		while (str[i] == word && str[i] != '\0')
			i++;
		if (str[i] != word && str[i] != '\0')
		{
			while (str[i] != word && str[i] != '\0')
				i++;
			num_array++;
		}
	}
	return (num_array);
}

static char	*ft_strndup(char const *str, size_t len)
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

static char	**allfree(char **rtn_str)
{
	size_t	i;

	i = 0;
	while (rtn_str[i] != NULL)
	{
		free(rtn_str[i]);
		i++;
	}
	free(rtn_str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn_str;
	size_t	i;
	size_t	j;
	size_t	array;

	array = count_array((char *)s, c);
	rtn_str = (char **) malloc (sizeof(char *) * (array + 1));
	if (rtn_str == NULL)
		return (NULL);
	j = 0;
	while (j < array)
	{
		i = 0;
		while (((char *)s)[i] != '\0' && ((char *)s)[i] == c)
			s++;
		while (((char *)s)[i] != '\0' && ((char *)s)[i] != c)
			i++;
		rtn_str[j] = ft_strndup((char *)s, i);
		if (rtn_str[j++] == NULL)
			return (allfree(rtn_str));
		s = s + i;
	}
	rtn_str[j] = NULL;
	return (rtn_str);
}

//if_null_func -> return string only

/*#include <stdio.h>

int main(void)
{
	char	a[] = "tripouille";
	char	b = 0;

	char	**c = ft_split(a, b);
	printf("%s\n", c[0]);
	printf("%s\n", c[1]);
	printf("%s\n", c[2]);
	printf("%s\n", c[3]);
	printf("%s\n", c[4]);
	free (*c);
}*/

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "      ";
	char	c = ' ';
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
}*/