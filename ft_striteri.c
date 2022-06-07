//
// Created by 本間優之介 on 2022/06/07.
//
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

void	additional_func(unsigned int i, char *s)
{
	*s += i;
}

int main(void)
{
	char a[] = "0000000000";
	ft_striteri(a, additional_func);

	printf("%d\n", strcmp(a, "0123456789"));
}
 */