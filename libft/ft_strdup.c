/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:57:15 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/06 17:01:43 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strdup(const char *s)
{
	char	*t;
	int		len;

	if (!s)
		return (NULL);
	len = strlen(s);
	t = (char *)malloc(len + 1);
	ft_memcpy(t, s, len + 1);
	return (t);
}
