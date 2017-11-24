/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rightshift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:43:23 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/24 16:36:32 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int	condition_right(char *tetri, char c, int xy)
{
	int i;

	i = 1;
	while (i < xy)
	{
		if (tetri[xy * i] == c)
			return (0);
		i++;
	}
	return (1);
}

char *ft_rightshift(char *map, char *str, char c, int xy)
{
	int i;
	int l;

	if (!(condition_right(str, c, xy)))
		return (str);
	l = ft_strlen(map);
	i = l - 1;
	while (map[i])
	{
		if (str[i] == c && map[i] == '.')
		{
			str[i + 1] = c;
			str[i] = '.';
			map[i + 1] = c;
			if (map[i] == c)
				map[i] = '.';
		}
		else if (str[i] == c && (map[i + 1] > 127 || map[i +1] \
				< 0))
			return (NULL);
		i--;
	}
	return (map);
}
