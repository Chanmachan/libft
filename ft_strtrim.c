/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hommayunosuke <hommayunosuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:14:26 by hommayunosu       #+#    #+#             */
/*   Updated: 2022/07/08 01:14:27 by hommayunosu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*sp_substr(char const *str, size_t start, size_t size)
{
	size_t	i;
	char	*rtn_str;

	rtn_str = (char *) malloc(sizeof(char) * size);
	i = 0;
	while (i < size && str[start] != '\0')
		rtn_str[i++] = str[start++];
	rtn_str[i] = '\0';
	return (rtn_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rtn_str;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	size;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	len = ft_strlen(s1);
	start =0;
	end = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[len - end]))
		end++;
	if (len < start + end)
		return (ft_strdup("\0"));
	size = len - start - end + 1;
	rtn_str = sp_substr((char *)s1, start, size);
	return (rtn_str);
}

//if set is NULL -> return (s1)

/*
#include <stdio.h>

int main(void)
{
	char *a = ft_strtrim("   xxx   xxx", " x");
	printf("%s\n", a);
	free(a);
	system("leaks -q a.out");
}
*/
