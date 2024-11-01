/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:49:19 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:49:42 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	s_len;

	i = 0;
	count = 0;
	s_len = ft_strlen(s);
	if (s[i] != c && s[i])
		count++;
	while (s[i] && i < s_len - 1)
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*fill_word(char const *s, char c, int *index)
{
	int		i;
	int		count;
	char	*ptr;

	count = 0;
	while (s[*index] == c && s[*index])
		(*index)++;
	i = *(index);
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	ptr = malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[*index] != c && s[*index])
	{
		ptr[i++] = s[(*index)++];
	}
	ptr[i] = '\0';
	while (s[*index] == c && s[*index])
		(*index)++;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	int		index;
	char	**ptr;
	char	*str;

	i = 0;
	index = 0;
	count = count_words(s, c);
	ptr = (char **)malloc((count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (i < count)
	{
		str = fill_word(s, c, &index);
		ptr[i] = ft_strdup(str);
		free(str);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

// int main()
// {
// 	int i = 0;

// 	char const str[] = "??am,?";
// 	char **ptr = ft_split(str, '?');
// 	while (ptr[i] != NULL)
// 	{
// 		printf("%s\t", ptr[i++]);
// 	}
// 	i = 0;
// 	while (ptr[i] != NULL)
// 	{
// 		free(ptr[i++]);
// 	}
// 	free(ptr);
// }
