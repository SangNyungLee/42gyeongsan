#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isalnum(int ch);
void *ft_memset(void *s, int c, size_t n);
void *ft_bzero(void *s, size_t n);
#endif