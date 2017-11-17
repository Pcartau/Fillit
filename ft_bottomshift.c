/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bottomshift.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:42:39 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/17 12:24:42 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char *ft_bottomshift(char *map, char *str, char c, int j)
{
	int i;
	int l;

	l = ft_strlen(str);
	i = l - 1;
	while (map[i])
	{
		if (str[i] == c && map[i + (j + 1)] == '.')
		{
			str[i + (j + 1)] = c;
			str[i] = '.';
			map[i + (j + 1)] = c;
			if (map[i] == c)
				map[i] = '.';
		}
		else if (str[i] == c && map[i + (j + 1)] > 127 && map[i - (j + 1)] \
				< 0)
			return (NULL);
		i--;
	}
	return (map);
}
