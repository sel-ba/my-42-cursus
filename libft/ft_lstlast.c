/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:29:58 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/26 15:43:14 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
	while(lst->next != NULL)
		lst = lst->next;
	return (lst);
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

// 	t_list *lastn = ft_lstlast(node0);
// 	printf("%s", lastn->content);
// }

