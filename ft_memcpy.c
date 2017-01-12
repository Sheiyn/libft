
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte	*a;
	t_byte	*b;
	size_t	i;

	i = 0;
	a = (t_byte *)src;
	b = (t_byte *)dst;
	if (n == 0)
		return (dst);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
