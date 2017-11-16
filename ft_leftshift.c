/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leftshift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:43:52 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/16 14:29:52 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_leftshift(char *map, char *str, char c, int j)
{
	int i;
	int k;

	k = 0;
	while (k < j)
	{
		i = 0;
		while (map[i])
		{
			if (str[i] == c && map[i - 1] == '.')
			{
				str[i - 1] = c;
				str[i] = '.';
				map[i - 1] = c;
				map[i] = '.';
			}
			else if (str[i] == c && map[i - 1] != '.')
				return (NULL);
			i++;
		}
		k++;
	}
	return (map);
}
