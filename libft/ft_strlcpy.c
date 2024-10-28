/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:57:14 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 17:53:33 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "sohayb";
// 	char str2[] = "el bakouri";
// 	puts("str1 before strlcpy ");
// 	puts(str1);
// 	ft_strlcpy(str1, str2, sizeof(str2));
// 	puts("\nstr1 after strlcpy ");
// 	puts(str1);
// }
