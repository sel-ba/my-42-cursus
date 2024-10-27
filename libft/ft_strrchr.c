/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:37:28 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 15:48:02 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strrchr( char* str, int c )
{
	int size;
	char * nstr;
	size = ft_strlen(str) - 1;

 	nstr = str + size;
	while (*(nstr))
	{
		if (*(nstr) == (char)c)
		{
			return (char *)(nstr);
		}
		(nstr)--;
	}
	return (0);
}

int main()
{
	char s[10] = "";
	char *str = ft_strrchr(s,'a');
	printf("%s",str);
}
