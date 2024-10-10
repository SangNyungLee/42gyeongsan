/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:22:29 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/10 16:14:16 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*extract_word(char *s, int *i, char c)
{
	char	*word;
	int		start;
	int		length;

	start = *i;
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	length = *i - start;
	word = ft_substr(s, start, length);
	if (!word)
		return (NULL);
	return (word);
}

void	free_memory(char **result, int idx)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		idx;

	result = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	idx = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			result[idx++] = extract_word((char *)s, &i, c);
			if (!result[idx - 1])
			{
				free_memory(result, idx);
				return (NULL);
			}
		}
		else
			i++;
	}
	result[idx] = NULL;
	return (result);
}
