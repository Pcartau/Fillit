/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 08:52:42 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/21 11:14:41 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

typedef	struct	s_tetri
{
	char letter;
	char *map;
	struct s_tetri *next;
}				s_tetri;

char	*ft_bottomshift(char *map, char *str, char c, int j);
char	*ft_leftshift(char *map, char *str, char c, int j);
char	*ft_rightshift(char *map, char *str, char c);
char	*ft_topshift(char *map, char *str, char c, int j);
char	*ft_goodplace(char *map, char *str, char c);
char	*ft_detect_trtri(char *map, char *src, char c, int j);
char	*ft_emptymap(int i, int j);
char	*ft_strdup(const char *src);
int		ft_checker(char *map, char c, int i);
int		ft_checkpoint(char *map);
size_t	ft_strlen(const char *src);
void	ft_classer_tetri(char *str, char c, int j);
char	*ft_return_tetri(s_tetri *tetri, char c);
#endif
