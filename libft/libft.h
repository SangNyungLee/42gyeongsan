/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:04:46 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/10 15:51:02 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
}	t_list;

int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *source, size_t n);
void	*ft_memmove(void *dest, const void *source, size_t n);
void	*ft_memchr(const void *str, int ch, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s, char const *set);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif