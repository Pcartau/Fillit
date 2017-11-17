/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 08:52:42 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/17 11:25:32 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_bottomshift(char *map, char *str, char c, int j);
char	*ft_leftshift(char *map, char *str, char c, int j);
char	*ft_rightshift(char *map, char *str, char c);
char	*ft_topshift(char *map, char *str, char c, int j);
char	*ft_goodplace(char *map, char *str, char c);
char	*ft_detect_trtri(char *src, char c);
char	*ft_emptymap(int i, int j);
char	*ft_strdup(const char *src);
int		ft_checker(char *map, char c, int i);
int		ft_checkpoint(char *map);
size_t	ft_strlen(const char *src);

#endif
