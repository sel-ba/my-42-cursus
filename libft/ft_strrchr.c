/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:37:28 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:39:18 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int			size;
	const char	*nstr;

	size = ft_strlen(str);
	nstr = str + size;
	while (nstr != str)
	{
		if (*(--nstr) == (char)c)
			return ((char *)nstr);
	}
	if (c == '\0')
		return ((char *)nstr);
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello, World!";
// 	char c = 'o';
// 	printf("The last occurence of %c is at %s\n", c, ft_strrchr(str, c));
// 	return (0);
// }
