NAME := cub3D

CC := cc

CFLAGS	:= -Wunreachable-code -Ofast -Wall -Werror -Wextra

MLX_FLAGS = ./MLX42/build/libmlx42.a -Iinclude -lglfw -framework Cocoa -framework OpenGL -framework IOKit

SRC_DIR := src/

LIBFT	= libft/

LIBFTTARGET	= $(LIBFT)libft.a

RM = rm -f

SRC := $(SRC_DIR)main.c \
		$(LIBFT)get_next_line.c \
		$(LIBFT)get_next_line_utils.c \

OBJS := $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT)
	@$(CC) $(CFLAGS) $(MLX_FLAGS) $(OBJS) -lreadline -o $(NAME) $(LIBFTTARGET)

all: $(NAME)

clean:
	@$(MAKE) -C $(LIBFT) fclean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re