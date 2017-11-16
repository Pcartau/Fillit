/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rightshift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:43:23 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/16 14:30:36 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(char *str);

char *ft_rightshift(char *map, char *str, char c, int j)
{
	int i;
	int k;
	int l;

	l = ft_strlen(map);
	k = 0;
	while (k < j)
	{
		i = l - 1;
		while (map[i])
		{
			if (str[i] == c && map[i + 1] == '.')
			{
				str[i + 1] = c;
				str[i] = '.';
				map[i + 1] = c;
				map[i] = '.';
			}
			else if (str[i] == c && map[i + 1] != '.')
				return (NULL);
			i--;
		}
		k++;
	}
	return (map);
}
