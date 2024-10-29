/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:55:06 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/29 21:55:06 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int num;
    int sign;
    int i;

    num = 0;
    sign = 1;
    i = 0;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
        num = num*10 + (str[i++] - '0');
    return (num*sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char str[] = "--1234";
//     printf("The result is: %d\n", ft_atoi(str));
//     printf("The result is: %d\n", atoi(str));
//     return (0);
// }