/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 08:57:53 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/17 12:27:36 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int main(void)
{
	int i;
	int j;
	int k;
	char *tetri;
	char *str;
	char *maptemp;
	char *map;
	char c;

	c = 'A';
	i = 4;
	j = 4;
	k = i;
	map = ft_emptymap(i, j);
	str = ft_strdup("....\n....\n..AA\n..AA\n\n....\nBB..\nBB...\n....\n\n");

	maptemp = ft_strdup(map);
	tetri = ft_detect_trtri(str, c);
	map = ft_topshift(map, tetri, c, j);
	map = ft_leftshift(map, tetri, c, j);

	c++;

	maptemp = ft_strdup(map);
	tetri = ft_detect_trtri(str, c);
	map = ft_topshift(map, tetri, c, j);
	if (!ft_checker(map, c, i))
	{
		map = maptemp;
		map = ft_bottomshift(map, tetri, c, j);
	}
	printf("%s\n", map);
	return (0);
}
