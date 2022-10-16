#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *p;

	i = 0;
	p = (unsigned char)s;
	while (p[i] != (unsigned char)c || i < n)
		i++;
	if(i < n)
		return (&p[i]);
	else
		return (NULL);
}