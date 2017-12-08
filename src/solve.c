/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:27:20 by vgauther          #+#    #+#             */
/*   Updated: 2017/12/04 13:38:33 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** fonction qui alloue et remplis la lib de point
*/

static char			*alloc_map(char *map, size_t size)
{
	if (map)
		free(map);
	if (!(map = (char*)malloc(sizeof(char) * (size * size + 1))))
		return (0);
	ft_memset(map, '.', size * size);
	map[size * size] = '\0';
	return (map);
}

static char			*try(t_var_struct_try var, int size, char **tetris, int t)
{
	int			i;
	char		*temp;

	i = 0;
	while (i < size * size)
	{
		if (check_valid_pos(i, size, tetris[t], var.map))
		{
			var.map = place_tetri(i, size, tetris[t], var.map);
			if (t + 1 == var.count)
				return (var.map);
			temp = try(var, size, tetris, t + 1);
			if (temp)
				return (temp);
			else
				ft_replace_char(var.map, 'A' + t, '.');
		}
		i++;
	}
	return (0);
}

int					solve(int count, char **tab, int size)
{
	char				*temp;
	t_var_struct_try	var;

	var.count = count;
	while (size < 20)
	{
		var.map = NULL;
		if (!(var.map = alloc_map(var.map, size)))
			return (0);
		temp = try(var, size, tab, 0);
		if (temp)
		{
			puttetri(temp);
			return (1);
		}
		size++;
	}
	return (0);
}
