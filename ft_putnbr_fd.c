//
// Created by 本間優之介 on 2022/06/07.
//
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}

/*
int main(void)
{
	ft_putnbr_fd(2147483647, 1);
}
 */