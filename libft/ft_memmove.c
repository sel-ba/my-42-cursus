/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:35:02 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/03 18:45:56 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*data_dst;
	char	*data_src;

	if (!src && !dst)
		return (NULL);
	if (src > dst)
		dst = ft_memcpy(dst, src, len);
	else
	{
		data_dst = (char *)dst;
		data_src = (char *)src;
		while (len--)
			data_dst[len] = data_src[len];
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[] = "sohayb";
//     char str2[] = "el bakouri";
//     puts("str1 before memmove ");
//     puts(str1);
//     ft_memmove(str1, str2, sizeof(str2));
//     puts("\nstr1 after memmove ");
//     puts(str1);
// }
