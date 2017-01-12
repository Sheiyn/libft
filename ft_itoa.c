
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*strnb;
	int		len;
	long	nb;

	nb = (long)n;
	len = ft_lenint(nb);
	if (!(strnb = ft_strnew(len)))
		return (NULL);
	if (nb < 0)
	{
		ft_strputneg(nb, strnb);
		nb *= -1;
	}
	while (len > 0)
	{
		strnb[len - 1] = '0' + nb % 10;
		nb /= 10;
		len--;
	}
	if (n < 0)
		strnb[0] = '-';
	return (strnb);
}
