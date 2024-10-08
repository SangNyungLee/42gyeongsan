/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:57:15 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/08 13:25:49 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*t;
	int		len;

	len = ft_strlen((char *)s);
	if (!len)
		return (NULL);
	t = (char *)malloc(len + 1);
	ft_memcpy(t, s, len + 1);
	return (t);
}
