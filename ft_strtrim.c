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
		return (ft_strdup((char *)s1));
	len = ft_strlen(s1);
	start = 0;
	end = 0;
	while (start < len && ft_strchr(set, s1[start]))
		start++;
	while (end < len && ft_strchr(set, s1[len - end]))
		end++;
	if (len < start + end)
		return (ft_strdup("\0"));
	size = len - start - end + 1;
	rtn_str = ft_substr((char *)s1, start, size);
	return (rtn_str);
}

//if set is NULL -> return (s1)

/*#include <stdio.h>
#include <string.h>

int main()
{
	char	*s1 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
	char	*s2 = "Hello \t  Please\n Trim me !";

	char *ret = ft_strtrim(s1, " \n\t");
	printf("%d\n", strcmp(ret, s2));
}*/

/*#include <stdio.h>

int main(void)
{
	char *a = ft_strtrim("   xxx   xxx", " x");
	printf("%s\n", a);
	free(a);
}*/
