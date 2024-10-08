/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:57:15 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/08 11:16:01 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*t;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	t = (char *)malloc(len + 1);
	ft_memcpy(t, s, len + 1);
	return (t);
}
