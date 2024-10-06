/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:43:06 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/06 16:33:26 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);

	j = 0;
	while (j < len && big[j])
	{
		i = 0;
		while (j + i < len && little[i] && big[j + i] == little[i])
		{
			i++;
		}
		if (little[i] == '\0')
			return ((char *)&big[j]);
		j++;
	}
	return (NULL);
}
