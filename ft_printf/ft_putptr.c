/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Souhaib <elbakourisohayb@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:02:13 by Souhaib           #+#    #+#             */
/*   Updated: 2025/01/07 14:38:34 by Souhaib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int		count;

	count = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	count += write(1, "0x", 2);
	count += ft_puthex((unsigned long)ptr, 'x');
	return (count);
}
