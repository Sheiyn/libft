
#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int n;
	int ret;

	i = 0;
	n = 0;
	ret = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (n == 1)
		return (-ret);
	return (ret);
}
