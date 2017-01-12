
#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i++ < len && dst < src)
		d[i - 1] = s[i - 1];
	while (len-- > 0 && dst > src)
		d[len] = s[len];
	return (d);
}
