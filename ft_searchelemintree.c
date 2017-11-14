/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchelemintree.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:46:14 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/14 10:49:15 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int searchNode(arbre_b *tree, unsigned int key)
{
	while (tree)
	{
		if (key == tree->key)
			return (1);
		if (key > tree->key)
			tree = tree->right;
		else
			tree = tree->left;
	}
	return (0);
}
