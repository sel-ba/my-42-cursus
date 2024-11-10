/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:00:15 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/30 13:59:02 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, b);
	return (p);
}
