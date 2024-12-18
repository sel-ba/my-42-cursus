/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:23:53 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/30 13:27:05 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	const char	*strfrom;
	char		*strto;
	size_t		i;

	if (!to && !from)
		return (NULL);
	i = 0;
	strfrom = (char *)from;
	strto = (char *)to;
	while (i < n)
	{
		strto[i] = strfrom[i];
		i++;
	}
	return (to);
}
