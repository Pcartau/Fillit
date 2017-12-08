/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:57:35 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/03 17:51:46 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static t_variable	checker(t_variable var, int size, int curs, int k)
{
	while (var.cursor != var.temp_cursor || var.i != var.temp_i)
	{
		if (var.cursor != var.temp_cursor)
			var.cursor++;
		if (var.i != var.temp_i)
			var.i++;
	}
	while (var.cursor != curs + size * k)
		var.cursor++;
	var.i++;
	var.temp_cursor += size;
	var.temp_i += 4;
	return (var);
}

int					check_valid_pos(int curs, int size, char *tetri, char *map)
{
	t_variable	var;
	int			k;

	var.i = 0;
	var.nbdiez = 0;
	var.cursor = curs;
	var.temp_cursor = init_temp(var.cursor, size);
	var.temp_i = 3;
	k = 1;
	while (tetri[var.i] && map[var.cursor])
	{
		while (var.i != var.temp_i && var.cursor != var.temp_cursor)
		{
			if (tetri[var.i] != '.' && map[var.cursor] == '.')
				var.nbdiez++;
			var.i++;
			var.cursor++;
		}
		if (tetri[var.i] != '.' && map[var.cursor] == '.')
			var.nbdiez++;
		var = checker(var, size, curs, k);
		k++;
	}
	return ((var.nbdiez == 4) ? 1 : 0);
}
