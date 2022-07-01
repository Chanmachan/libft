#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*rtn_box;

	if (n <= ULLONG_MAX && size <= ULLONG_MAX)
	{
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
	return (NULL);
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
