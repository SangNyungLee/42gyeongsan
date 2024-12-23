/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:26:06 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/04 19:40:58 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*des;
	unsigned char	*cpy;
	size_t			i;

	if (!dest && !src && n > 0)
		return (NULL);
	des = (unsigned char *)dest;
	cpy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = cpy[i];
		i++;
	}
	if (n)
		return ((void *)des);
	else
		return (dest);
}
