
#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	return (!s || !(str = ft_strnew(len)) || \
			!(ft_memmove(str, s + start, len))) ? NULL : str;
}
