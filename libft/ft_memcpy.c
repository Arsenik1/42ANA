#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p;
	p = dest;
	char	*q;
	q = (void *)src;
	while (n--)
		*p++ = *q++;
	return dest;
}