/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:21:02 by sanglee           #+#    #+#             */
/*   Updated: 2024/10/06 14:31:39 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;

	j = check_len(src);
	i = 0;
	if (size != 0)
	{
		while (i < j && i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (j);
}
