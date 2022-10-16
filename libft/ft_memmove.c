#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p;
	p = dest;
	char	*q;
	q = (void *)src;
	if (p < q)
	{
		while (n--)
			*p++ = *q++;
	}
	else
	{
		p += n;
		q += n;
		while (n--)
			*--p = *--q;
	}
	return (dest);
}