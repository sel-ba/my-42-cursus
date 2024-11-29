/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:41:30 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/29 18:47:28 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strdup(char *src);
char	*read_to_storage(int fd, char *storage);
char	*extract_line(char *storage);
char	*update_storage(char *storage);
char	*join_and_free(char *storage, char *buffer);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int ch);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *to, const void *from, size_t n);

#endif