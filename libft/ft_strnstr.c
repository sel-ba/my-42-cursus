/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:26:28 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:41:54 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	to_find_len;

	if (!to_find[0])
		return ((char *)str);
	i = 0;
	to_find_len = ft_strlen(to_find);
	while (str[i] && (i + to_find_len - 1) < len)
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			if (j == to_find_len - 1)
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (0);
}
