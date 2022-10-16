#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		if(little[j] == '\0')
			return ((char *)&big[i - j]);
		if(big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (NULL);
}











































// char	*ft_strnstr(const char	*big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	while (big[i] && i < len)
// 	{
// 		j = 0;
// 		while (little[j] && big[i + j] && little[j] == big[i + j] && i + j < len)
// 			j++;
// 		if (little[j] == '\0')
// 			return ((char *)&big[i]);
// 		i++;
// 	}
// 	return (NULL);
// }