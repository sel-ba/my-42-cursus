/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:17:15 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:44:27 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*cpy;
	int		i;

	cpy = (char *)malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello, World!";
// 	char *cpy = ft_strdup(str);
// 	printf("The copied string is: %s\n", cpy);
// 	free(cpy);
// 	return (0);
// }
