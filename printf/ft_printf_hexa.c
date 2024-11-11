/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:33:58 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/11 12:12:40 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex(unsigned long num, char *hex_digits)
{
	int		i;
	int		len;
	char	hex[16];

	i = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num > 0)
	{
		hex[i] = hex_digits[num % 16];
		num /= 16;
		i++;
	}
	len = i;
	while (--i >= 0)
		write(1, &hex[i], 1);
	return (len);
}

int	ft_printf_hexa(unsigned int n, char c)
{
	if (n == 0)
		return (write(1, "0", 1));
	if (c == 'x')
		return (ft_hex(n, "0123456789abcdef"));
	else
		return (ft_hex(n, "0123456789ABCDEF"));
}
