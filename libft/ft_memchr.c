/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:17:25 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/10 15:13:31 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n && (*(unsigned char *) s != (unsigned char) c))
	{
		s = (unsigned char *) s + 1;
		n--;
	}
	if (n)
		return ((void *)s);
	else
		return (NULL);
}
