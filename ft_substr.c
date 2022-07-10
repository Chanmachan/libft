/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hommayunosuke <hommayunosuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:14:29 by hommayunosu       #+#    #+#             */
/*   Updated: 2022/07/08 01:14:30 by hommayunosu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*rtn_str;
	size_t	len_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		return (ft_strdup("\0"));
	rtn_str = (char *) malloc (sizeof(char) * (ft_strlen(s) - start + 1));
	if (rtn_str == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
		rtn_str[i++] = s[start++];
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
