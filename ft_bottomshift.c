/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bottomshift.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:42:39 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/16 14:29:24 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(char *str);

char *ft_bottomshift(char *map, char *str, char c, int j)
{
	int k;
	int i;
	int l;

	l = ft_strlen(str);
	k = 0;
	while (k < j)
	{
		i = l - 1;
		while (map[i])
		{
			if (str[i] == c && map[i + (j + 1)] == '.')
			{
				str[i + (j + 1)] = c;
				str[i] = '.';
				map[i + (j + 1)] = c;
				map[i] = '.';
			}
			else if (str[i] == c && map[i + (j + 1)] != '.')
				return (NULL);
			i--;
		}
		k++;
	}
	return (map);
}
