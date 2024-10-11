/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:57:03 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/11 14:29:57 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*trim_left(char const *s1, char const *set)
{
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	return (ft_strdup(s1));
}

char	*trim_right(char *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	s1[len] = '\0';
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if (!s1 || set)
		return (NULL);
	str = trim_left(s1, set);
	if (str)
		str = trim_right(str, set);
	return (str);
}
