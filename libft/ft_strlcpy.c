#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
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
	return (size - 1);
}
