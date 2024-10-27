/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:22:57 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/26 10:07:38 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	int i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s);
		i++;
	}
}

void ft_toupper(unsigned int i, char *c)
{
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 32;
}
int main()
{
	char s[] = "adHHf";
	ft_striteri(s, &ft_toupper);
	printf("%s", s);
}
