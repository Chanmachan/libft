#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
//	size_t			i;
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	if (n == 0)
		return (dest);
	if (dest == NULL || src == NULL)
		return (0);
	if (dest > src)
	{
		while (n > 0)
		{
			new_dest[n - 1] = new_src[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(new_dest, new_src, n);
	}
	return (dest);
}

/*
#include <stdio.h>

int main()
{
	char	str[] = {67, 68, 67, 68, 69, 0, 45};;

	ft_memmove(str + 1, str, 2);
	printf("%s\n", str);
}
*/
