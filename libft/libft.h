#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strnstr(const char	*big, const char *little, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);

#endif