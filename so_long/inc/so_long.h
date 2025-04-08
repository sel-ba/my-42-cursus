/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bako <sel-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:54:35 by sel-bako          #+#    #+#             */
/*   Updated: 2025/04/04 22:27:06 by sel-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx/mlx.h"
//#include "/usr/include/minilibx-linux/mlx.h"
# include "../src/GNL/get_next_line.h"

typedef struct s_map
{
	int		exit_count;
	int		player_count;
	int		collectible_count;
	char	**map;
	int		height;
	int		width;

}			t_map;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	t_map	*map_info;
	void	*img_wall;
	void	*img_player;
	void	*img_collectible;
	void	*img_exit;
	void	*img_exitopen;
	void	*img_p_on_exit;
	void	*img_floor;
	int		player_x;
	int		player_y;
	int		exit_x;
	int		exit_y;
	int		moves;
}			t_game;

int			count_line(char *map_name);
void		validate_map(char *map_name, t_map *map_info);
void		free_map(char **map, int height);
int			check_dimensions(char **map, int height, int *width);
int			is_valid_map(t_map *map_info);
char		**read_map(char *map_name, int height);
void		free_all(t_map *map_info);
int			is_path_valid(char **map, int width, int height);
int			validate_extension(const char *filename);
void		init_map_features(t_map *map_info);
void		launch_game(t_map *map_info);
void		render_map(t_game *game);
void		destroy_game(t_game *game, int err);
void		setup_hooks(t_game *game);
void		player_position(t_game *game);
void		exit_position(t_game *game);
void		ft_putnbr(int nb);

#endif
