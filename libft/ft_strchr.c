/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:15:07 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/11 18:21:34 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	t;
	char			*str;

	i = 0;
	t = (unsigned char)c;
	str = (char *)s;
	while (s[i])
	{
		if (s[i] == t)
		{
			return (&str[i]);
		}
		i++;
	}
	if (t == '\0')
		return (&str[i]);
	str = NULL;
	return (str);
}
