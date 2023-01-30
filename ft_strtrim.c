/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:21:47 by mac               #+#    #+#             */
/*   Updated: 2023/01/25 18:46:56 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  len;
    char    *strim;
    
    if (!s1 || !set)
        return (NULL);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    len = ft_strlen(s1);
    while (len && ft_strchr(set, s1[len]))
        len--;
    strim = ft_substr(s1, 0, len + 1);
    return (strim);
}
