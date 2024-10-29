/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:35:59 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/26 15:43:48 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	while((*lst)->next != NULL)
		(*lst) = (*lst)->next;
	(*lst)->next = new;

}

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

// }
