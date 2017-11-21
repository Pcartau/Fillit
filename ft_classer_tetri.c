/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_classer_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 08:55:46 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/21 13:51:55 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

s_tetri	*addlink(s_tetri *tetri, char *str, char c)
{
	s_tetri *tmp;

	tmp = malloc(sizeof(s_tetri));
	if (tmp)
	{
		tmp->map = str;
		tmp->letter = c;
		tmp->next = tetri;
	}
	return (tmp);
}

void	ft_classer_tetri(char *str, char c, int j)
{
	char *tmp;
	s_tetri *tetri;

	tetri = NULL;
	while (c != 'C')
	{
		tmp = ft_detect_trtri(ft_emptymap(j, j), str, c, j);
		tmp = ft_topshift(ft_emptymap(j, j), tmp, c, j);
		tmp = ft_leftshift(ft_emptymap(j, j), tmp, c, j);
		tetri = addlink(tetri, tmp, c);
		c++;
	}
}
