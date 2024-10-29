/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:12:11 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/26 16:47:05 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	while (temp->next != NULL)
	{
		*lst = temp;
		ft_lstdelone(*lst, del);
		temp = temp->next;
	}
	ft_lstdelone(temp, del);
}

void ft_tolower(void *s)
{
	int i;
	char *ch;

	i = 0;
	ch = (char *)s;
	while(ch[i])
	{
		ch[i] = ch[i] + 32;
		i++;
	}
}

int main()
{
	char c1[] = "AAAA";
	char c2[] = "BBB";
	char c3[] = "CCCC";
	t_list* node0 = ft_lstnew("dfsaa");
	t_list* node1 = ft_lstnew(c1);
	t_list* node2 = ft_lstnew(c2);
	t_list* node3 = ft_lstnew(c3);


	node0->next = node1;
	node1->next = node2;
	node2->next = node3;

	ft_lstclear(&node1, &ft_tolower);
	printf("%s\n", node1->content);
	printf("%s\n", node2->content);
	printf("%s", node3->content);
	free(node0);
	free(node2);
	free(node3);

}

