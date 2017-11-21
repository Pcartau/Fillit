# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgauther <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:13:38 by vgauther          #+#    #+#              #
#    Updated: 2017/11/21 10:34:31 by pcartau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfil.a

EXE = fillit

FLAGS = -Wall -Werror -Wextra

SRC = ft_strdup.c ft_strlen.c ft_detect_trtri.c ft_bottomshift.c \
	   ft_goodplace.c ft_leftshift.c ft_rightshift.c \
	  ft_topshift.c ft_emptymap.c ft_checkpoint.c main.c ft_checker.c \
	  ft_classer_tetri.c ft_return_tetri.c

all: $(SRC)
	gcc $(FLAGS) $(SRC)

#all: $(NAME)

#%.o: %.c
#	gcc $(FLAGS) -c -o $@ $<

#$(NAME): $(OBJ)
#	ar rc $(NAME) $(OBJ)
#	ranlib $(NAME)

#clean:
#	/bin/rm -f $(OBJ)

#fclean: clean
#	/bin/rm -f $(NAME)

#re : fclean all

#.PHONY : clean fclean all re
