/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:09:38 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/20 15:55:03 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex(unsigned long num)
{
	int		i;
	int		len;
	char	*hex_digits;
	char	hex[16];

	hex_digits = "0123456789abcdef";
	i = 0;
	while (num > 0)
	{
		hex[i] = hex_digits[num % 16];
		num /= 16;
		i++;
	}
	len = i + 2;
	write(1, "0x", 2);
	while (--i >= 0)
		write(1, &hex[i], 1);
	return (len);
}

int	ft_printf_pointer(void *str)
{
	unsigned long	pp;

	if (str == NULL)
		return (write(1, "(nil)", 5));
	pp = (unsigned long)str;
	return (ft_hex(pp));
}
