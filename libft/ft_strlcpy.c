/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:21:02 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/10 15:46:26 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int		i;
	unsigned int		j;

	j = check_len((char *)src);
	i = 0;
	if (size != 0)
	{
		while (i < j && i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (j);
}
