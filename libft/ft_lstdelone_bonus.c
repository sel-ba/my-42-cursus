/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:43:59 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/01 21:56:01 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del != NULL)
		del(lst->content);
	free(lst);
}

// #include <stdio.h>

// void ft_tolower(void *s)
// {
// 	int i;
// 	char *ch;

// 	i = 0;
// 	ch = (char *)s;
// 	while(ch[i])
// 	{
// 		ch[i] = ch[i] + 32;
// 		i++;
// 	}
// }

// int main()
// {
// 	char c[] = "UJHDDD";
// 	t_list* node0 = ft_lstnew("dfsaa");
// 	t_list* node1 = ft_lstnew(c);
// 	t_list* node2 = ft_lstnew("2222");
// 	t_list* node3 = ft_lstnew("33333");
// 	node0->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	ft_lstdelone(node1, &ft_tolower);
// 	printf("%s", node1->content);
// 	free(node0);
// 	free(node2);
// 	free(node3);
// }
