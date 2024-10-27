/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:50:36 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/26 14:24:04 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	node->content = content;
	node->next = 0;
	return (node);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *node = ft_lstnew("Hicham");
// 	printf("%s", node->content);
// 	free(node);
// }