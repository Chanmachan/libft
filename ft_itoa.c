/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hommayunosuke <hommayunosuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:13:23 by hommayunosu       #+#    #+#             */
/*   Updated: 2022/07/08 01:13:24 by hommayunosu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digit(int num, size_t digit)
{
	while (num >= 10)
	{
		num = num / 10;
		digit++;
	}
	return (digit);
}

static int	convert_sign_plus(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	return (num);
}

static int	if_int_min_minus(int num, char *chr_n, size_t *stopper)
{
	if (num == -2147483648)
	{
		chr_n[0] = '-';
		chr_n[1] = '2';
		num = 147483648;
		*stopper = 2;
		return (num);
	}
	else if (num < 0)
	{
		chr_n[0] = '-';
		num = num * -1;
		*stopper = 1;
		return (num);
	}
	return (num);
}

static char	*put_char_num(int num, char *chr_n, size_t *stopper, size_t len)
{
	while (len-- > *stopper)
	{
		chr_n[len] = num % 10 + 48;
		num = num / 10;
	}
	return (chr_n);
}

char	*ft_itoa(int n)
{
	char	*chr_n;
	size_t	len_n;
	int		tmp_n;
	size_t	stopper;

	tmp_n = n;
	len_n = 2;
	stopper = 0;
	if (tmp_n == -2147483648)
		len_n = 11;
	if (tmp_n < 0)
		len_n = len_n + 1;
	if (tmp_n < 0)
		tmp_n = convert_sign_plus(tmp_n);
	len_n = get_digit(tmp_n, len_n);
	chr_n = (char *)malloc(sizeof(char) * (len_n + 1));
	if (chr_n == NULL)
		return (NULL);
	n = if_int_min_minus(n, chr_n, &stopper);
	chr_n[len_n--] = '\0';
	chr_n = put_char_num(n, chr_n, &stopper, len_n);
	return (chr_n);
}

/*#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
}*/

//int -> -2147483648 <= n <= 2147483647

/*//before upper itoa
#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*chr_n;
	size_t 	len_n;
	int 	tmp_n;
	size_t 	chanma;

	tmp_n = n;
	len_n = 2;
	chanma = 0;
	if (tmp_n == -2147483648)
	{
		len_n = 11;
	}
	if (tmp_n < 0)
	{
		len_n++;
		tmp_n = tmp_n * -1;
	}
	while (tmp_n >= 10)
	{
		printf("--------------------------\nlen_n\t: %zu\n", len_n);
		tmp_n = tmp_n / 10;
		len_n++;
	}
	printf("len_n = %zu\n", len_n);
	chr_n = (char *)malloc(sizeof(char) * (len_n + 1));
	if (n == -2147483648)
	{
		chr_n[0] = '-';
		chr_n[1] = '2';
		n = 147483648;
		chanma = 2;
	}
	if (n < 0)
	{
		chr_n[0] = '-';
		n = n * -1;
		printf("change_minus -> n = %d\n", n);
		chanma = 1;
	}
	chr_n[len_n] = '\0';
	len_n = len_n - 1;
	while (len_n-- > chanma)
	{
		chr_n[len_n] = n % 10 + 48;
		n = n / 10;
		printf("chr_n[%zu]\t: %c\n-------------------------\n", len_n, chr_n[len_n]);
	}
	return (chr_n);
}
*/