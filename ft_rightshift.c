/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rightshift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:43:23 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/17 12:36:43 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char *ft_rightshift(char *map, char *str, char c)
{
	int i;
	int l;

	l = ft_strlen(map);
	i = l - 1;
	while (map[i])
	{
		if (str[i] == c && map[i + 1] == '.')
		{
			str[i + 1] = c;
			str[i] = '.';
			map[i + 1] = c;
			if (map[i] == c)
				map[i] = '.';
		}
		else if (str[i] == c && map[i + 1] > 127 && map[i +1] \
				< 0)
			return (NULL);
		i--;
	}
	return (map);
}
