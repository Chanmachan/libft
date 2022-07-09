/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hommayunosuke <hommayunosuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:14:24 by hommayunosu       #+#    #+#             */
/*   Updated: 2022/07/08 01:14:25 by hommayunosu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_s;
	int		len_s_tmp;
	int		i;
	char	*new_s;

	new_s = (char *) s;
	len_s = ft_strlen(s);
	len_s_tmp = len_s;
	i = 0;
	if ((char) c == '\0' || c == 0)
		return (new_s + len_s_tmp);
	while (len_s--)
	{
		if (new_s[len_s] == (char) c)
			return (new_s + len_s_tmp - i - 1);
		i++;
	}
	return (NULL);
}

//L19 -1 -> address back due to while(len_s--)

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char *a = NULL;
	int b = 'a';

	printf("%s\n", ft_strrchr(a, b));

	char *c = NULL;
	int d = 'a';

	printf("%s\n", strrchr(c, d));
}*/
//if s == NULL SIGSEGV (same as the original)