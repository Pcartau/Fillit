/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:11:56 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/12 15:24:17 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	t;
	char			*str;

	i = ft_strlen(s);
	t = (unsigned char)c;
	str = (char *)s;
	while (i >= 0)
	{
		if (s[i] == t)
		{
			return (&str[i]);
		}
		i--;
	}
	str = NULL;
	return (str);
}
