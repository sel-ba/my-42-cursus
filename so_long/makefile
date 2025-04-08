NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror

MLX_DIR = minilibx
#MLX_DIR = /usr/include/minilibx-linux
MLX_LIB = -lmlx -L$(MLX_DIR) -lXext -lX11


SRCS = main.c \
      src/parsing/free_map.c src/parsing/is_valid_path.c src/parsing/is_valid_map.c \
      src/parsing/validate_extension.c src/parsing/validate_map.c \
      src/GNL/gnl.c src/GNL/gnl_utils.c \
      src/game/find_positions.c src/game/launch_game.c src/game/move_player.c \



OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(MLX_LIB) -o $(NAME)

%.o: %.c inc/so_long.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re