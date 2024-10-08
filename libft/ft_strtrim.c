/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:57:03 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/08 11:21:50 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*trim_left(char *s1, char *set)
{
	char	*str;

	str = ft_strdup((const char *)s1);
	while (*str)
	{
		if (*str == *set)
		{
			str++;
			set++;
		}
		else
			break ;
	}
	return (str);
}

char	*trim_right(char *s1, char *set)
{
	char	*str;
	int		s1_len;
	int		set_len;

	str = ft_strdup((const char *)s1);
	s1_len = (int)ft_strlen(s1) - 1;
	set_len = (int)ft_strlen(set) - 1;

	while (s1_len >= 0 && set_len >= 0)
	{
		if (*(str + s1_len) == *(set + set_len))
		{
			s1_len--;
			set_len--;
		}
		else
			break ;
	}
	*(str + ++s1_len) = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*new_set;

	str = ft_strdup((const char *)s1);
	new_set = (char *)set;
	return (trim_right(trim_left(str, new_set), new_set));
}
