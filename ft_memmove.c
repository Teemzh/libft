/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:16:32 by mac               #+#    #+#             */
/*   Updated: 2023/01/30 20:14:19 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)//Функция memmove копирует n байт из массива (области памяти), на который указывает аргумент src, в массив (область памяти), на который указывает аргумент dst. При этом массивы (области памяти) могут пересекаться.
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
// int main()
//  {
//  	char str[100] = "Libc is the standard library.";

// 	ft_memmove(str, "tema", 4);
// 	printf("After memset(): %s\n", str);
// 	return 0;
//  }