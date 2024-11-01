/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:50:19 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 22:04:30 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_digits(int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	fill_string(char *str, int n, int ng)
{
	int	i;

	if (ng)
		str[0] = '-';
	i = num_of_digits(n);
	while (n > 9)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
	str[i] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	int		ng;
	char	*str;

	ng = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		ng = 1;
	}
	str = (char *)malloc(num_of_digits(n) + ng);
	if (str == NULL)
		return (NULL);
	fill_string(str, n, ng);
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char * str = ft_itoa(-2147483648);
// 	printf("%s",str);
// }
