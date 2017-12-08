/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 08:42:04 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/11 18:06:37 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	s;
	unsigned char	*src1;
	unsigned char	*dst1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	s = (char)c;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == s)
			return (dst1 + i + 1);
		i++;
	}
	return (NULL);
}
