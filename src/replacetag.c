/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacetag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:27:05 by vgauther          #+#    #+#             */
/*   Updated: 2017/12/04 13:18:52 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** les deux fonctions permettent de changer les # en caracteres
*/

void			ft_replace_char(char *str, char r, char c)
{
	size_t i;

	i = 0;
	if (str)
		while (str[i])
		{
			if (str[i] == r)
				str[i] = c;
			i++;
		}
}

void			ft_replace_char_all(char **map)
{
	size_t	i;
	char	c;

	i = 0;
	c = 'A';
	while (map[i])
	{
		ft_replace_char(map[i], '#', c);
		i++;
		c++;
	}
}
