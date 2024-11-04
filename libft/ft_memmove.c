/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:28:16 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/04 19:40:32 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	memmove_forward(char *dest, const char *src, size_t n)
{
	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
}

static void	memmove_backward(char *dest, const char *src, size_t n)
{
	dest += n - 1;
	src += n - 1;
	while (n--)
	{
		*dest = *src;
		dest--;
		src--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ret;

	if (!dest && !src && n > 0)
		return (NULL);
	ret = dest;
	if (dest <= src || (char *) dest >= ((char *)src + n))
	{
		memmove_forward((char *)dest, (const char *)src, n);
	}
	else
	{
		memmove_backward((char *)dest, (const char *)src, n);
	}
	return (ret);
}
