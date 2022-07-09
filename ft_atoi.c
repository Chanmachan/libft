/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hommayunosuke <hommayunosuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:12:57 by hommayunosu       #+#    #+#             */
/*   Updated: 2022/07/08 01:12:58 by hommayunosu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\r' || \
			c == '\f' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	new_s;
	int		sign;
	size_t	i;

	new_s = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		if (sign == 1 && (new_s * 10 + sign * (str[i] - '0')) / 10 != new_s)
			return ((int)LONG_MAX);
		if (sign == -1 && (new_s * 10 + sign * (str[i] - '0')) / 10 != new_s)
			return ((int)LONG_MIN);
		new_s = (new_s * 10) + sign * (str[i] - '0');
		i++;
	}
	return ((int)new_s);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
//	char a[] = "	 \n-42 3";

	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("-2147483648"));
}*/
