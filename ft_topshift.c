/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_topshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:44:15 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/16 14:53:05 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_topshift(char *map, char *str, char c, int j)
{
	int k;
	int i;

	k = 0;
	while (k < j)
	{
		i = 0;
		while (map[i])
		{
			if (str[i] == c && map[i - (j + 1)] == '.')
			{
				str[i - (j + 1)] = c;
				str[i] = '.';
				map[i - (j + 1)] = c;
				map[i] = '.';
			}
			else if (str[i] == c && map[i - (j + 1)] != '.')
				return (NULL);
			i++;
		}
		k++;
	}
	return (map);
}
