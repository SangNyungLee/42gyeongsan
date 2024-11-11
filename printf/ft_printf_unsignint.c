/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsignint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:08:45 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/11 12:02:12 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_fd(unsigned int n, int *i)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, i);
		ft_putnbr_fd(n % 10, i);
	}
	else
		change_num(n + 48, i);
}

int	ft_printf_unsignedint(unsigned int n)
{
	int		*i;
	int		result;

	i = (int *)malloc(sizeof(int));
	if (!i)
		return (0);
	*i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		free(i);
		return (1);
	}
	ft_putnbr_fd(n, i);
	result = *i;
	free(i);
	return (result);
}
