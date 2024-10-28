/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:35:02 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 17:49:24 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Handle overlapping != memcpy
void	*ft_memmove(void *to, const void *from, size_t n)
{
	const char	*strfrom;
	char		*strto;

	if (to == NULL || from == NULL || n == 0)
		return (NULL);
	strfrom = (const char *)from;
	strto = (char *)to;
	if (strto < strfrom)
	{
		while (n--)
			*strto++ = *strfrom++;
	}
	else
	{
		strto += n;
		strfrom += n;
		while (n--)
			*(--strto) = *(--strfrom);
	}
	return (to);
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
