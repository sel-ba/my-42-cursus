/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:08:58 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/29 22:08:58 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s[start] && i < len)
        str[i++] = s[start++];
    str[i] = '\0'
    return (str);
}