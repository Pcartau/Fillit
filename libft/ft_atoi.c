/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:44:53 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/12 14:48:25 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	calc(const char *str, int i)
{
	int result;

	result = 0;
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

int			ft_atoi(const char *str)
{
	int x;
	int i;

	i = 0;
	x = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
			|| str[i] == '\f' || str[i] == '\r' || str[i] == 32)
		i++;
	if (!str[i])
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = -1;
		else
			x = 1;
		i++;
	}
	return (calc(str, i) * x);
}
