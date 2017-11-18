/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leftshift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:43:52 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/18 16:57:49 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int condition_left(char *map, char c, int j)
{
	int i;

	i = 0;
	if (map[i] == c)
		return (0);
	while (i < j * 3)
	{
		if (map[i + j + 1] == c)
			return (0);
		i += j + 1;
	}
	return (1);
}

char *ft_leftshift(char *map, char *str, char c, int j)
{
	int i;
	int k;

	k = 0;
	while (condition_left(map, c, j))
	{
		i = 0;
		while (map[i])
		{
			if (str[i] == c && map[i - 1] == '.')
			{
				str[i - 1] = c;
				str[i] = '.';
				map[i - 1] = c;
				if (map[i] == c)
					map[i] = '.';
			}
			else if (str[i] == c && (map[i - 1] > 127 || map[i - 1] \
						< 0))
				return (NULL);
			i++;
		}
		k++;
	}
	return (map);
}
