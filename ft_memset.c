
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	a = (char *)b;
	while (i < len)
	{
		a[i] = (char)c;
		i++;
	}
	return (b);
}
