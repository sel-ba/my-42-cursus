/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:21:05 by sel-bako          #+#    #+#             */
/*   Updated: 2024/10/26 16:15:44 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
#include <fcntl.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
size_t ft_strlen(const char* str);
void ft_putchar_fd(char c, int fd);
char *ft_strdup(char *src);
t_list *ft_lstnew(void *content);
t_list *ft_lstlast(t_list *lst);
void ft_lstdelone(t_list *lst, void (*del)(void*));


#endif
