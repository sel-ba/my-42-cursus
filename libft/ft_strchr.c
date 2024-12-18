/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:30:49 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:38:28 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (char)ch)
			return ((char *)(str));
		str++;
	}
	if (ch == '\0')
		return ((char *)(str));
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello, World!";
// 	char c = 'W';
// 	printf("The first occurence of %c is at %s\n", c, ft_strchr(str, c));
// 	return (0);
// }
