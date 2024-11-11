/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:04:18 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/11 12:07:51 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printf_char(char c);
int		ft_printf_string(char *str);
int		ft_write(char c);
int		ft_printf_pointer(void *str);
int		ft_printf_int(int num);
int		ft_printf_unsignedint(unsigned int n);
void	change_num(char c, int *i);
int		ft_printf_hexa(unsigned int n, char c);
#endif