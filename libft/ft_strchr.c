/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:30:49 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/27 18:13:22 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (char)ch)
			return (char *)(str);
		str++;
	}
	if (ch == '\0')
		return (char *)(str);
	return (NULL);
}
