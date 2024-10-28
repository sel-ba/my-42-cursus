/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:10:42 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 18:31:00 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (const unsigned char *)str;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello, World!";
//     char c = 'W';
//     printf("The first occurence of %c is at %s\n", c, ft_memchr(str, c, 13));
//     return (0);
// }