# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgauther <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/04 12:19:23 by vgauther          #+#    #+#              #
#    Updated: 2017/12/04 12:24:43 by vgauther         ###   ########.fr        #
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

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = ft_atoi.o ft_bzero.o ft_memcpy.o ft_memset.o \
	ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o \
	ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
	ft_strlen.o ft_isalpha.o ft_isdigit.o \
	ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
	ft_memalloc.o ft_memdel.o ft_memccpy.o ft_memmove.o ft_memchr.o \
	ft_memcmp.o ft_strcmp.o ft_strncmp.o ft_strnew.o ft_strdel.o ft_strclr.o \
	ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o \
	ft_strnequ.o ft_strsub.o ft_strcpy.o ft_strncpy.o ft_strdup.o ft_strcat.o \
	ft_strncat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o \
	ft_strjoin.o ft_strsplit.o ft_itoa.o ft_strtrim.o ft_strlcat.o \
	ft_lstnew.o ft_lstdel.o ft_lstdelone.o ft_lstadd.o ft_lstiter.o ft_lstmap.o


all: $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c -o $@ $<
	@echo "$(RESET)$(GREEN)Compiling Libft in progress... $(WHITE)$(RESET)"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(RESET)$(BLUE)Creating Lib$(WHITE)$(RESET)"
	@ranlib $(NAME)
	@echo "$(RESET)$(MAGENTA)Indexing lib$(WHITE)$(RESET)"

clean:
	@/bin/rm -f $(OBJ)
	@echo "$(RESET)$(BOLDRED)Removing Object of lib$(WHITE)$(RESET)"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "$(RESET)$(BOLDRED)Removing exe of lib$(WHITE)$(RESET)"

re: fclean all

.PHONY: clean fclean re
