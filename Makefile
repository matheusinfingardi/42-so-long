# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 15:10:47 by minfinga          #+#    #+#              #
#    Updated: 2024/10/19 15:32:04 by minfinga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
NAME_BONUS = so_long_bonus

LIBFT_DIR = ./libs/libft
FT_PRINTF_DIR = ./libs/ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/ft_printf.a
INC = ./inc ./libs/ft_printf/include ./libs/libft
SRCS_DIR = ./srcs/
BONUS_SRCS_DIR = ./bonus_srcs/
OBJS_DIR = ./obj/
BONUS_OBJS_DIR = ./bonus_obj/

CC = cc
CFLAGS = -Wall -Werror -Wextra $(addprefix -I, $(INC))
MINILIBX_FLAGS = -lmlx -lXext -lX11
VALGRIND = @valgrind --leak-check=full --show-leak-kinds=all \
--track-origins=yes --quiet --tool=memcheck --keep-debuginfo=yes

RM = rm -rf

SRCS = $(addprefix $(SRCS_DIR),
		so_long.c 			\
		ft_check_map.c 		\
		ft_close_game.c 	\
		ft_free_memory.c	\
		ft_handle_input.c	\
		ft_init_game.c		\
		ft_init_map.c		\
		ft_render_map.c		\
		ft_utils.c)

BONUS_SRCS = $(addprefix $(BONUS_SRCS_DIR),
		so_long_bonus.c 			\
		ft_check_map_bonus.c 		\
		ft_close_game_bonus.c 	\
		ft_free_memory_bonus.c	\
		ft_handle_input_bonus.c	\
		ft_init_game_bonus.c		\
		ft_init_map_bonus.c		\
		ft_render_map_bonus.c		\
		ft_utils_bonus.c)

OBJS = $(patsubst $(SRCS_DIR)%.c,$(OBJS_DIR)%.o,$(SRCS))
BONUS_OBJS = $(patsubst $(BONUS_SRCS_DIR)%.c,$(BONUS_OBJS_DIR)%.o,$(BONUS_SRCS))

all: $(LIBFT) $(FT_PRINTF) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(FT_PRINTF):
	@make -C $(FT_PRINTF_DIR)

$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	@$(CC) $(CFLAGS) $(MINILIBX_FLAGS) $(OBJS) $(LIBFT) $(FT_PRINTF) -o $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(MINILIBX_FLAGS) -c $< -o $@

$(OBJS_DIR)%.o: bonus_srcs/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(FT_PRINTF_DIR)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(NAME)_bonus
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(FT_PRINTF_DIR)

re: fclean all

rebonus: fclean ${NAME_BONUS}

run: ${NAME}
	${VALGRIND} ./${NAME} assets/maps/valid/map4.ber

run_bonus:	${NAME_BONUS}
	${VALGRIND} ./${NAME} assets/maps/bonus/valid/map5.ber

.PHONY: all clean fclean re rebonus valgrind run run_bonus