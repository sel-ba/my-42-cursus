/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:00:15 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/29 22:00:15 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *ptr;

    ptr = malloc(nitems * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nitems * size);
    return (ptr);
}

// #include <stdio.h>

// int main()
// {
//     int *ptr;
//     int nitems = 5;
//     int size = sizeof(int);
//     ptr = ft_calloc(nitems, size);
//     for (int i = 0; i < nitems; i++)
//         printf("%d\n", ptr[i]);
//     return (0);
// }