/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:24:00 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/11 17:47:57 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	t;

	i = 0;
	str = (unsigned char *)s;
	t = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == t)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
