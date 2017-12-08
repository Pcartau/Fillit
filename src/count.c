/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:26:11 by vgauther          #+#    #+#             */
/*   Updated: 2017/12/04 11:26:14 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** fonction contant le nombre de tetriminos qui nous sont envoyes
*/

int	count_tetri(char *map)
{
	int count;
	int i;
	int k;

	count = 1;
	i = 0;
	k = 0;
	while (map[i])
	{
		if (k == 20)
		{
			k = 0;
			count++;
			i++;
		}
		k++;
		i++;
	}
	return (count);
}
