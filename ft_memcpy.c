/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:55:01 by mac               #+#    #+#             */
/*   Updated: 2023/01/30 20:12:21 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)//Функция memcpy копирует n байт из массива (области памяти), на который указывает аргумент src, в массив (область памяти), на который указывает аргумент dst. Если массивы перекрываются, результат копирования будет не определен.
{
	char		*dstc;
	const char	*srccc;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = (char *)dst;
	srccc = (const char *)src;
	while (n--)
		dstc[n] = srccc[n];
	return (dst);
}
// int main()
//  {
//  	char str[100] = "Libc is the standard library.";

// 	ft_memcpy(str, "llllllllll", 10);
// 	printf("After memset(): %s\n", str);
// 	return 0;
//  }