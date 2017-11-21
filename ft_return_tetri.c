/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:29:23 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/21 11:14:54 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_return_tetri(s_tetri *tetri, char c)
{
	s_tetri *tmp;

	tmp = tetri;
	while (tmp)
	{
		if (tmp->letter == c)
			return (tmp->map);
		tmp = tmp->next;
	}
	return (NULL);
}
