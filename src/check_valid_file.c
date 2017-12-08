/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <pcartau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:06:30 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/03 17:35:56 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		check_onepiece(char *str, int i, int calc_diez, int local_i)
{
	if (str[i - 1] == '#' && local_i - 1 >= 0)
		calc_diez++;
	if (str[i + 1] == '#' && local_i + 1 < 21)
		calc_diez++;
	if (str[i - 5] == '#' && local_i - 5 >= 0)
		calc_diez++;
	if (str[i + 5] == '#' && local_i + 5 < 21)
		calc_diez++;
	return (calc_diez);
}

int		check_piece(char *str)
{
	int i;
	int local_i;
	int calc_diez;

	calc_diez = 0;
	i = 0;
	while (str[i])
	{
		local_i = 0;
		while (local_i != 21)
		{
			if (str[i] == '#')
				calc_diez = check_onepiece(str, i, calc_diez, local_i);
			local_i++;
			i++;
		}
		if (calc_diez != 6 && calc_diez != 8)
			return (0);
		calc_diez = 0;
		if (str[i - 1] == '\0')
			i--;
	}
	return (1);
}

int		check_size(char *str)
{
	int nb_n;
	int i;
	int local_i;

	nb_n = 0;
	local_i = 0;
	i = 0;
	while (str[i])
	{
		local_i = 0;
		while (local_i < 21)
		{
			if (str[i] == '\n' || str[i] == '\0')
				nb_n++;
			local_i++;
			i++;
		}
		if (nb_n != 5 || str[i] == '\n')
			return (0);
		nb_n = 0;
		if (str[i - 1] == '\0')
			i--;
	}
	return (1);
}

int		check_diez(char *str)
{
	int i;
	int j;
	int nb_diez;

	i = 0;
	nb_diez = 0;
	while (str[i])
	{
		j = 0;
		while (j < 21)
		{
			if (str[i] == '#')
				nb_diez++;
			j++;
			i++;
		}
		if (nb_diez != 4)
			return (0);
		nb_diez = 0;
		if (str[i - 1] == 0)
			i--;
	}
	if (str[i - 1] == '\n' && str[i - 2] == '\n')
		return (0);
	return (1);
}

int		check_valid_file(char *str)
{
	int i;

	i = 0;
	if (str[0] == 0)
		return (0);
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '\0' && str[i] != '.' && str[i] != '#')
			return (0);
		i++;
	}
	return (check_size(str) & check_diez(str) & check_piece(str));
}
