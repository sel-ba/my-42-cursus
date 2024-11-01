/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:14:03 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:48:36 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_chars(char const *str, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (in(set, str[i]))
	{
		count++;
		i++;
	}
	i = ft_strlen(str) - 1;
	while (in(set, str[i]))
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		count;
	int		first;
	int		last;

	count = count_chars(s1, set);
	ptr = (char *)malloc(ft_strlen(s1) - count + 1);
	first = 0;
	while (in(set, s1[first]))
	{
		first++;
	}
	last = ft_strlen(s1) - 1;
	while (in(set, s1[last]))
	{
		last--;
	}
	count = 0;
	while (first <= last)
	{
		ptr[count++] = s1[first++];
	}
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "   Hello, World!   ";
// 	char set[] = " ";
// 	char *cpy = ft_strtrim(str, set);
// 	printf("The copied string is: %s\n", cpy);
// 	free(cpy);
// 	return (0);
// }
