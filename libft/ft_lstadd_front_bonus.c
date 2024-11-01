/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:10:31 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:53:58 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*swap;

	new->next = *lst;
	swap = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list* node0 = ft_lstnew("dfsaa");
// 	t_list* node1 = ft_lstnew("1111");
// 	t_list* node2 = ft_lstnew("2222");
// 	t_list* node3 = ft_lstnew("33333");
// 	node0->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	t_list* node = ft_lstnew("Fisrt");
// 	ft_lstadd_front(&node0, node);
// 	//printf("%s", node0->content);
// }
