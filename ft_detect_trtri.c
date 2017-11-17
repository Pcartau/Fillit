/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_trtri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:24:42 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/17 08:58:29 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char			*ft_detect_trtri(char *src, char c)
{
	char *dst;
	int i;
	int tmp;
	int j;

	i = ((int)c - 64) * 21;
	tmp = i;
	j = 0;
	dst = (char *)malloc(sizeof(char) * 22);
	while (tmp < i + 21)
	{
		dst[j] = src[tmp - 21];
		j++;
		tmp++;
	}
	dst[j] = '\0';
	return (dst);
}
