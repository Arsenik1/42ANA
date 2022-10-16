#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*(p++) != 0)
		;
	while (*(p--) != (char)c && p != s)
		;
	if (p == (char *)s)
		return (NULL);
	else
		return (p);
}
