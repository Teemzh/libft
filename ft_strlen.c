/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:59:53 by mac               #+#    #+#             */
/*   Updated: 2023/01/19 20:09:57 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s) // считает кол во символов в строке
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
%d - digit 
%s string
%f - float
%l-long
%ll long long 
%
*/

// int main(int argc, char *argv[])
// {
//     if (argc < 2)
//     {
//         printf("Error: no string provided\n");
//         return 1;
//     }
//     printf("длина '%s' is: %ld\n", argv[1], ft_strlen(argv[1]));
//     return 0;
// }