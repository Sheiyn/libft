
#include "libft.h"

int		ft_lenint(int n)
{
	int		len;
	long	nb;

	len = 1;
	nb = (long)n;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	return (len);
}
