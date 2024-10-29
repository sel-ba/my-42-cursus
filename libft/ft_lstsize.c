/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:23:57 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/26 15:29:35 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
	int i;

	i = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int main()
{
	t_list* node0 = ft_lstnew("dfsaa");
	// t_list* node1 = ft_lstnew("1111");
	// t_list* node2 = ft_lstnew("2222");
	// t_list* node3 = ft_lstnew("33333");


	// node0->next = node1;
	// node1->next = node2;
	// node2->next = node3;

	printf("%i", ft_lstsize(node0));

}

