/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:45:49 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/23 14:58:22 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int x, size_t n)
{
	char *str;
	int i;

	i = 0;
	str = ptr;
	while (i < n)
		str[i++] = x;
	return (ptr);
}

// #include <stdio.h>
// void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

// int main()
// {
//     int n = 10;
//     int arr[n];
//     ft_memset(arr, 7, n*sizeof(arr[0]));
//     printf("Array after memset()\n");
//     printArray(arr, n);
//     return 0;
// }
