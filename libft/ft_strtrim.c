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

static int	in(char const c, char const *set)
{
	int	cur;

	cur = -1;
	while (set[++cur])
		if (set[cur] == c)
			return (1);
	return (0);
}

static char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, "", 1);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s1_len;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (in(s1[start], set))
		start++;
	s1_len = ft_strlen(s1);
	end = s1_len - 1;
	if (start == s1_len)
		return (empty_string());
	while (in(s1[end], set))
		end--;
	trim = malloc((end - start + 2) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (s1 + start), (end - start + 2));
	return (trim);
}
