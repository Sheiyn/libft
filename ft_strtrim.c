
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (j < 0)
		j = ft_strlen(s);
	if (!(str = ft_strsub(s, i, j - i + 1)))
		return (NULL);
	return (str);
}
