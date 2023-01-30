/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:34:30 by mac               #+#    #+#             */
/*   Updated: 2023/01/26 17:00:20 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_nbr_len(int nb)
{
    int len;

    len = 0;
    if (nb <= 0)
        len = 1;
    while (nb != 0)
    {
        len++;
        nb  /= 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    long    nbr;
    int     nsize;
    char    *str;

    nbr = n;
    nsize = ft_nbr_len(n);
    str = (char *)malloc(sizeof(char) * (nsize + 1));
    if(!str)
        return(NULL);
    if(nbr < 0)
    {
        nbr *= -1;
        str[0] = '-';
    }
    str[nsize] = '\0';
    if(nbr == 0 || nbr == -0)
        str[0] = '0';
    while (nbr > 0)
    {
        str[--nsize] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);
}