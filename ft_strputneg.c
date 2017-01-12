
#include "libft.h"

char	*ft_strputneg(int n, char *strnb)
{
	if (n < 0)
		strnb[0] = '-';
	return (strnb);
}
