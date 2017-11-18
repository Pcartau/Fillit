/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_trtri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:24:42 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/18 13:11:41 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char		*ft_detect_trtri(char *map, char *src, char c, int j)
{
	char	*dst;
	int		i;
	int		l;
	int		k;

	i = (j * j) + (j + 1);
	if (!(dst = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	l = 0;
	k = ((c - 64) * 21) - 21;
	while (l < i)
	{
		while (src[k] != '\n' && l < i - 1)
		{
			dst[l] = src[k];
			k++;
			l++;
		}
		if (map[l] == '\n')
			k++;
		dst[l] = map[l];
		l++;
	}
	dst[l] = '\0';
	return (dst);
}
