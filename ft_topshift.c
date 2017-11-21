/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_topshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:44:15 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/21 10:23:28 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int	condition_top(char *map, char c, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		if (map[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_topshift(char *map, char *str, char c, int j)
{
	int i;

	if (!(condition_top(str, c, j)))
		return (str);
	while (condition_top(map, c, j))
	{
		i = 0;
		while (map[i])
		{
			if (str[i] == c && map[i - (j + 1)] == '.')
			{
				str[i - (j + 1)] = c;
				str[i] = '.';
				map[i - (j + 1)] = c;
				if (map[i] == c)
					map[i] = '.';
			}
			else if (str[i] == c && (map[i - (j + 1)] > 127 || \
						map[i - (j + 1)] < 0))
				return (NULL);
			i++;
		}
	}
	return (map);
}
