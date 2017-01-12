
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (len1 + len2))))
		return (NULL);
	if (!(str = ft_strcpy(str, s1)))
		return (NULL);
	if (!(str = ft_strcat(str, s2)))
		return (NULL);
	return (str);
}
