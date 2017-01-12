
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	charc;

	charc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == charc)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (charc == '\0')
		return ((char *)s + i);
	return (NULL);
}
