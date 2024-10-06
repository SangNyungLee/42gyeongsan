#ifndef LIBFT_H
#define	LIBFT_H

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_strlen(char *str);
#endif