/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:14:57 by mac               #+#    #+#             */
/*   Updated: 2023/01/30 22:22:01 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	void	*mass;

	mass = (char *) malloc(count * size);
	if (mass == NULL)
		return (NULL);
	ft_bzero(mass, count * size);
	return (mass);
}
// int main(void)
// {
//     // Allocate memory for 5 strings
//     char **allocated_memory = (char**) ft_calloc(5, sizeof(char*));
//     if (allocated_memory == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Assign values to the allocated memory
//     allocated_memory[0] = strdup("Hello");
//     allocated_memory[1] = strdup("World");
//     allocated_memory[2] = strdup("Foo");
//     allocated_memory[3] = strdup("Bar");
//     allocated_memory[4] = strdup("Baz");

//     // Print the values
//     for (int i = 0; i < 5; i++)
//     {
//         printf("allocated_memory[%d] = %s\n", i, allocated_memory[i]);
//     }

//     // Free the allocated memory
//     for (int i = 0; i < 5; i++)
//     {
//         free(allocated_memory[i]);
//     }
//     free(allocated_memory);

//     return 0;
// }