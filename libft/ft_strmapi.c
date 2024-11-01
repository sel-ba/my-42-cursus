/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:26:37 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 22:07:35 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		str_len;
	int		i;

	i = 0;
	str_len = ft_strlen(s);
	ptr = (char *)malloc((str_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>

// char ft_toupper(unsigned int i, char c)
// {
// 	(void)i;
// 	return (c - 32);
// }

// int main()
// {
// 	char const *s = "addff";
// 	char *str = ft_strmapi(s, &ft_toupper);
// 	printf("%s", str);
// }
