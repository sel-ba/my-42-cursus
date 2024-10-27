/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:59:44 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 17:02:27 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (s == NULL || n == 0)
		return s;
	char *str;
	size_t i;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = 0;
}

// #include <stdio.h>

// int main()
// {
//printf("sel-bako");
// 	char s[20] = "sohaybbbbb";
// 	ft_bzero(s+3,2);
// 	printf("%s\n",s);
// }
