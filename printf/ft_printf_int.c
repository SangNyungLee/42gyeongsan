/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:31:46 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/11 12:01:15 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	change_num(char c, int *i)
{
	write(1, &c, 1);
	(*i)++;
}

static void	ft_putnbr_fd(int n, int *i)
{
	if (n == -2147483648)
	{
		change_num('-', i);
		change_num('2', i);
		ft_putnbr_fd(147483648, i);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		(*i)++;
		n = -n;
		ft_putnbr_fd(n, i);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, i);
		ft_putnbr_fd(n % 10, i);
	}
	else
		change_num(n + 48, i);
}

int	ft_printf_int(int num)
{
	int		*i;
	int		result;

	i = (int *)malloc(sizeof(int));
	if (!i)
		return (0);
	*i = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		free(i);
		return (1);
	}
	ft_putnbr_fd(num, i);
	result = *i;
	free(i);
	return (result);
}
