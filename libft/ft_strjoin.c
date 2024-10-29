/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:14:43 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/29 22:14:43 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    char *ptr;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    ptr = (char *)malloc(s1_len + s2_len + 1);
    if (!ptr)
        return (NULL);
    ft_memcpy(ptr, s1, s1_len);
    ft_memcpy(ptr + s1_len, s2, s2_len);
    ptr[s1_len + s2_len] = '\0';
    return (ptr);
}

// #include <stdio.h>

// int main()
// {
//     char s1[] = "Hello, ";
//     char s2[] = "World!";
//     char *ptr = ft_strjoin(s1, s2);
//     printf("%s\n", ptr);
//     return (0);
// }