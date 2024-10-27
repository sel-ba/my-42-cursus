/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:29:06 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 18:15:16 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return c;
}

// #include <stdio.h>

// int main()
// {
// 	char c = 'A';
// 	printf("The lowercase of %c is %c\n", c, ft_tolower(c));
// 	return 0;
// }
