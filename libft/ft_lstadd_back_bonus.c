/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:35:59 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:55:45 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}

// #include <stdio.h>

// int main()
// {
// 	t_list* node0 = ft_lstnew("dfsaa");
// 	t_list* node1 = ft_lstnew("1111");
// 	t_list* node2 = ft_lstnew("2222");
// 	t_list* node3 = ft_lstnew("33333");
// 	node0->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	t_list* node = ft_lstnew("Fisrt");
// 	ft_lstadd_back(&node0, node);
// 	t_list *last = ft_lstlast(node0);
// 	printf("%s", last->content);
// 	free(node0);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	free(node);
// }
