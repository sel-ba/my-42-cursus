/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:31:27 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 18:31:27 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *str1, const void *str2, size_t n)
{
    const unsigned char *s1;
    const unsigned char *s2;

    s1 = (const unsigned char *)str1;
    s2 = (const unsigned char *)str2;
    while (n--)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (0);
}

// #include <stdio.h>

// int main()
// {
//     char str1[] = "abcdef";
//     char str2[] = "abcdeF";
//     printf("%d\n", memcmp(str1, str2, 6));
//     return 0;
// }