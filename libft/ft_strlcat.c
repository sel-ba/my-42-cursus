/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:54:03 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 17:54:03 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dstsize == 0)
        return (src_len);
    i = 0;
    while (dst[i] && i < dstsize)
        i++;
    j = 0;
    while (src[j] && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}

// #include <stdio.h>

// int main()
// {
//     char str1[40] = "sohayb";
//     char str2[] = " el bakouri";
//     puts("str1 before strlcat ");
//     puts(str1);
//     ft_strlcat(str1, str2, sizeof(str1));
//     puts("\nstr1 after strlcat ");
//     puts(str1);
// }