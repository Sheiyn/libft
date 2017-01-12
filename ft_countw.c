
#include "libft.h"

int		ft_countw(char const *s, char c)
{
	int		i;
	int		j;
	int		nbw;

	i = 0;
	j = 0;
	nbw = 0;
	while (s[i])
	{
		while (s[i] != c && s[i + 1])
		{
			if (j == 0)
				nbw++;
			j++;
			i++;
		}
		if (j > 0)
		{
			j = 0;
			i--;
		}
		i++;
	}
	return (nbw);
}
