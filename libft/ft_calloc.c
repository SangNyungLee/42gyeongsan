/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:00:21 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/07 16:26:27 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char			*ptr;

	i = nmemb * size;
	if ((ptr = malloc(i)) == NULL)
		return (NULL);
	ft_memset(ptr, 0, i);
	return (ptr);
}
