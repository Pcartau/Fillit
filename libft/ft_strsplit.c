/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:02:22 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/12 08:49:12 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		remplir(char const *s, char **tab, int *tab1, char c)
{
	int		j;
	int		x;

	j = 0;
	x = tab1[0];
	while (s[tab1[0]] != c)
		tab1[0] += 1;
	if (!(tab[tab1[1]] = (char *)malloc(sizeof(char) * tab1[0] - x + 1)))
		return (0);
	while (x < tab1[0])
	{
		tab[tab1[1]][j] = s[x];
		j++;
		x++;
	}
	tab[tab1[1]][j] = '\0';
	return (tab1[0]);
}

static	int		detectword(char const *s, int i, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}

static	int		countwords(char const *s, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			word++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		word;
	int		tab1[2];

	if (s)
	{
		tab1[0] = 0;
		tab1[1] = 0;
		word = countwords(s, c);
		if (!(tab = (char **)malloc(sizeof(char *) * word + 1)))
			return (NULL);
		while (s[tab1[0]] && tab1[1] < word)
		{
			tab1[0] = detectword(s, tab1[0], c);
			if (!(tab1[0] = remplir(s, tab, tab1, c)))
				return (NULL);
			tab1[1] += 1;
		}
		tab[tab1[1]] = NULL;
		return (tab);
	}
	return (NULL);
}
