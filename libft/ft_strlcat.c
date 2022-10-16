#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	len = ft_strlen(src);
	while (dst[i])
		i++;
	while (src[i] && i < size && i < len)
	{
		dst[i] = src[i];
		i++;
		if (i == len)
		{
			dst[i] = '\0';
			break ;
		}
	}
	return (strlen(dst) - 1);
}
