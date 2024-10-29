/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:26:28 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/28 18:26:28 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t little_len;

    if (!*little)
        return (char *)big;
    little_len = ft_strlen(little);
    while (*big && len)
    {
        if (*big == *little)
        {
            if (ft_strncmp(big, little, little_len) == 0)
                return (char *)big;
        }
        big++;
        len--;
    }
    return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello, World!";
//     char str2[] = "H";
//     size_t len = 20;
//     printf("The first occurence of %s is at %s\n", str2, ft_strnstr(str, str2, len));
//     return (0);
// }