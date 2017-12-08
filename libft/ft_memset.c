/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <pcartau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:17:35 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/11 18:11:29 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	s;
	char			*tab;
	size_t			i;

	i = 0;
	s = c + 0;
	tab = (char *)b;
	while (i < len)
	{
		tab[i] = s;
		i++;
	}
	return (tab);
}
