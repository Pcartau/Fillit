/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 08:57:53 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/21 14:00:16 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int main(void)
{
	int i;
	int j;
	int k;
	int l;
//	char *tetri;
	char *str;
//	char *maptemp;
//	char *map;
	char c;

	c = 'A';
	l = 0;
	i = 4;
	j = 4;
	k = i;
	str = ft_strdup("....\nA...\nAA..\nA...\n\n..BB\n..BB\n....\n....\n\n....\n....\n....\n....\n\n");
	ft_classer_tetri(str, c, j);

	/*
	map = ft_emptymap(i, j);
	tetri = ft_detect_trtri(map, str, c, j);
	map = ft_goodplace(map, tetri, c);
	map = ft_topshift(map, tetri, c, j);
	map = ft_leftshift(map, tetri, c, j);

	maptemp = ft_strdup(map);
	c++;
	tetri = ft_detect_trtri(ft_emptymap(i, j), str, c, j);

	while (l != i + 1)
	{
		if (l == i)
		{
			tetri = ft_detect_trtri(ft_emptymap(i, j), str, c, j);
			tetri = ft_bottomshift(ft_emptymap(i, j), tetri, c, j);
			l = 0;
		}
		while (l < i)
		{
			map = ft_goodplace(map, tetri, c);
			if (!(ft_checker(map, c, j)))
			{
				tetri = ft_rightshift(ft_emptymap(i, j), tetri, c);
				map = ft_strdup(maptemp);
			}
			else
				l = i;
			l++;
		}
	}

	printf("%s", map);*/
	return (0);
}
