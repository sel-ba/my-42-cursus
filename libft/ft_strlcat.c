/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:54:03 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 17:54:03 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= src_len)
		return (ft_strlen(src) + dstsize);
	while (src[i] && (src_len + i) < (dstsize - 1))
	{
		dst[src_len + i] = src[i];
		i++;
	}
	dst[src_len + i] = 0;
	return (ft_strlen(src) + src_len);
}
