/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:22:29 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/08 12:51:24 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**result;
	int		len;
	int		i;
	int		check;

	str = ft_strdup(s);
	len = ft_strlen((char *)s);
	i = 0;
	while (str[i] != '\0' && (i < len))
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	result = (int **)malloc(sizeof(int *) * i);
	i = 0;

}
