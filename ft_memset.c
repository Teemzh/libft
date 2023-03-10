/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:43:22 by mac               #+#    #+#             */
/*   Updated: 2023/01/30 20:11:43 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len) // Функция memset заполняет первые len байт области памяти, на которую указывает аргумент b, символом, код которого указывается аргументом c.
{
    char *p;
    p = (char *)b;
    while(len > 0)
    {
        *p = c;
        p++;
        len--;
    }
    return b;
}

//  int main()
//  {
//  	char str[100] = "Libc is the standard library.";

// 	ft_memset(str, '.', 4);
// 	printf("After memset(): %s\n", str);
// 	return 0;
//  }
