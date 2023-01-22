#include "../includes/libft.h"

double	ft_clamp(double f, double min, double max)
{
	if (f < min)
		return (min);
	else if (f > max)
		return (max);
	else
		return (f);
}
