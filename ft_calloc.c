/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hommayunosuke <hommayunosuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:13:04 by hommayunosu       #+#    #+#             */
/*   Updated: 2022/07/08 01:13:05 by hommayunosu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*rtn_box;

	if (n >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	if (n == 0 || size == 0)
		return (NULL);
	rtn_box = (void *) malloc(n * size);
	if (rtn_box == NULL)
		return (NULL);
	ft_memset(rtn_box, 0, n * size);
	return (rtn_box);
}

/*
void	*ft_calloc(size_t n, size_t size)
{
	void	*rtn_box;
	if(n <= 4294967295 && size <= 42949667295)
	{
		rtn_box = (void *) malloc (n * size);
		if (rtn_box == NULL)
			return (NULL);
		ft_memset(rtn_box, 0, n * size);
		return (rtn_box);
	}
	return (NULL);
}*/
//proto
