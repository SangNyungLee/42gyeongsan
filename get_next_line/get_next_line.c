/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:25:03 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/11 15:46:06 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *save_chr;
    char    *buff;
    ssize_t bytes_read;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (NULL);
    buff = (char *)malloc((BUFFER_SIZE + 1));
    if (!buff)
        return (NULL);
    
    while ((bytes_read = read(fd, buff, BUFFER_SIZE)) > 0)
    {
        
    }
    
}