/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:54:33 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/11 18:11:50 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		i;

	i = (n < 0) ? 2 : 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		len;
	int		cpy;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	cpy = n;
	len = ft_intlen(n);
	if ((n < 0 ? 1 : 0))
		cpy = -n;
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	len--;
	while (len >= 0)
	{
		ret[len--] = '0' + cpy % 10;
		cpy = cpy / 10;
	}
	if ((n < 0 ? 1 : 0))
		ret[0] = '-';
	return (ret);
}
