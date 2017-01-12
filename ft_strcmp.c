
#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	t_byte	*str1;
	t_byte	*str2;
	size_t	i;

	str1 = (t_byte *)s1;
	str2 = (t_byte *)s2;
	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
