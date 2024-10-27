/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:17:05 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 18:03:51 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char* str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello, World!";
// 	printf("The length is: %zu\n", ft_strlen(str));
// 	return (0);	
// }