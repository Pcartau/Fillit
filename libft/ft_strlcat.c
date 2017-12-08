/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:53:10 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/12 19:00:41 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst1;
	size_t src1;
	size_t ret;

	i = 0;
	j = 0;
	dst1 = ft_strlen(dst);
	src1 = ft_strlen((char *)src);
	if (size <= dst1)
		ret = src1 + size;
	else
	{
		ret = src1 + dst1;
		j = size - dst1 - 1;
		while (j > 0)
		{
			dst[dst1 + i] = src[i];
			i++;
			j--;
		}
		dst[dst1 + i] = '\0';
	}
	return (ret);
}
