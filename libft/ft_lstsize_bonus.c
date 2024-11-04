/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:43:18 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/04 16:30:51 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
    int     i;
    t_list  *temp;

    i = 0;
    temp = lst;
    if (!lst)
        return (0);
    while (temp->next)
    {
        i++;
        temp = temp->next;
    }
    if (temp->next == NULL)
        i++;
    return (i);
}