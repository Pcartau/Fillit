# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgauther <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/04 11:24:28 by vgauther          #+#    #+#              #
#    Updated: 2017/12/04 11:25:49 by vgauther         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS
RESET=\033[0m
DARK=\033[132m
RED=\033[31m
GREEN=\033[32m
YELLOW=\033[33m
BLUE=\033[34m
MAGENTA=\033[35m
CYAN=\033[36m
WHITE=\033[37m
BOLDBLACK=\033[1m\033[30m
BOLDRED=\033[1m\033[31m
BOLDWHITE=\033[1m\033[37m

NAME = fillit
SRC = src/main.c src/check_valid_file.c src/check_valid_pos.c src/count.c \
	src/ft_or.c src/min_size.c src/place_tetri.c src/replacetag.c src/solve.c \
	src/tab.c src/up_left.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc

.PHONY: clean fclean re re-bis

all : $(NAME)

$(NAME):
	@make -C libft/
	@echo "$(RESET)$(GREEN)Lib done $(WHITE)$(RESET)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I libft/ -L libft/ -lft
	@echo "$(RESET)$(GREEN)Compiling fillit.. $(WHITE)$(RESET)"

clean:
	@make -C libft/ clean
	@rm -f $(OBJ)
	@echo "$(RESET)$(BOLDRED)Removing Object$(WHITE)$(RESET)"

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME)
	@echo "$(RESET)$(BOLDRED)Removing exe$(WHITE)$(RESET)"

re: fclean all

re-bis:
	@rm -f $(OBJ)
	@echo "$(RESET)$(BOLDRED)Removing Object$(WHITE)$(RESET)"
	@rm -f $(NAME)
	@echo "$(RESET)$(BOLDRED)Removing exe$(WHITE)$(RESET)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I libft/ -L libft/ -lft
	@echo "$(RESET)$(GREEN)Compiling fillit.. $(WHITE)$(RESET)"
