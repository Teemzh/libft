/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:24:57 by mac               #+#    #+#             */
/*   Updated: 2023/01/30 16:31:06 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *lsst;
    
    lsst = lst;
    if(lst = NULL)
        return (NULL);
    while(lsst -> next != NULL)
    {
        lsst = lsst -> next;
    }
    return (lsst);
}
