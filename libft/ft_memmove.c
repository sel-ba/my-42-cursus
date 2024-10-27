/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:35:02 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/23 18:56:10 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *to, const void *from, size_t n)
{
	if (to == NULL || from == NULL || n == 0)
		return to;
	const char *strfrom;
	char *strto;

	strfrom = from;
	strto = to;
	while (n-- > 0)
	{
		*strto++ = *strfrom++;
	}

	return (to);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[] = "Geeks"; // Array of size 100
//     char str2[] = "Quiz"; // Array of size 5

//     puts("str1 before memmove ");
//     puts(str1);

//     /* Copies contents of str2 to sr1 */
//     ft_memmove(str1, str2, sizeof(str2));

//     puts("\nstr1 after memmove ");
//     puts(str1);

//     return 0;
// }
