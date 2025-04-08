/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:54:18 by sel-bako          #+#    #+#             */
/*   Updated: 2025/04/04 22:29:30 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/so_long.h"

void	init_map_features(t_map *map_info)
{
	map_info->exit_count = 0;
	map_info->player_count = 0;
	map_info->collectible_count = 0;
	map_info->map = NULL;
	map_info->height = 0;
	map_info->width = 0;
}

int	main(int ac, char **av)
{
	t_map	*map_info;

	if (ac != 2)
	{
		write(2, "Error: Synatax : ./so_long <map_name.ber>\n", 42);
		return (-1);
	}
	else
	{
		map_info = malloc(sizeof(t_map));
		if (!map_info)
			return (-1);
		init_map_features(map_info);
		if (!validate_extension(av[1]))
			return (free(map_info), -1);
		validate_map(av[1], map_info);
		if (!map_info->map)
			return (free(map_info), -1);
		launch_game(map_info);
		if (map_info)
			return (free_all(map_info), -1);
	}
	return (0);
}
