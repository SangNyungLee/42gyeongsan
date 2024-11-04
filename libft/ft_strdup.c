/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:57:15 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/04 19:42:53 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*t;
	int		len;

	len = ft_strlen(s);
	t = (char *)malloc(len + 1);
	if (!t)
		return (NULL);
	ft_memcpy(t, s, len);
	t[len] = '\0';
	return (t);
}
