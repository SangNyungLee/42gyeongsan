/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:23:27 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/11 12:04:25 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write(char c)
{
	return (write(1, &c, 1));
}

int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_printf_string(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_printf_pointer(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_printf_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_printf_unsignedint(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_printf_hexa(va_arg(args, unsigned int), c));
	else if (c == '%')
		return (write(1, "%%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
