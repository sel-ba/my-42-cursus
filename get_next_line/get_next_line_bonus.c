/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:21:22 by sel-bako          #+#    #+#             */
/*   Updated: 2024/11/29 19:11:42 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = read_to_storage(fd, storage);
	if (!storage)
		return (NULL);
	line = extract_line(storage);
	storage = update_storage(storage);
	return (line);
}

char	*read_to_storage(int fd, char *storage)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!storage)
		storage = ft_strdup("");
	while (1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		storage = join_and_free(storage, buffer);
		if (!storage || ft_strchr(storage, '\n'))
			break ;
	}
	free(buffer);
	if (bytes_read == -1)
	{
		free(storage);
		return (NULL);
	}
	return (storage);
}

char	*join_and_free(char *storage, char *buffer)
{
	char	*temp;

	temp = storage;
	storage = ft_strjoin(temp, buffer);
	free(temp);
	return (storage);
}

char	*extract_line(char *storage)
{
	char	*line;
	int		i;

	if (!storage[0])
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	ft_strlcpy(line, storage, i + 1);
	return (line);
}

char	*update_storage(char *storage)
{
	char	*new_storage;
	int		i;
	int		j;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\n')
		i++;
	if (!storage[i])
		return (free(storage), NULL);
	new_storage = malloc(ft_strlen(storage) - i + 1);
	if (!new_storage)
		return (free(storage), NULL);
	j = 0;
	while (storage[i])
		new_storage[j++] = storage[i++];
	new_storage[j] = '\0';
	return (free(storage), new_storage);
}
