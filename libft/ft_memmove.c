/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:35:02 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/03 18:45:56 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Handle overlapping != memcpy
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;

	d = dest;
	if (d == s || n == 0)
	{
		return (dest);
	}
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[] = "sohayb";
//     char str2[] = "el bakouri";
//     puts("str1 before memmove ");
//     puts(str1);
//     ft_memmove(str1, str2, sizeof(str2));
//     puts("\nstr1 after memmove ");
//     puts(str1);
// }
