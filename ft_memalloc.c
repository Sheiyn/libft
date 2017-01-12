
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*newalloc;

	if (!(newalloc = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_memset(newalloc, 0, size);
	return (newalloc);
}
