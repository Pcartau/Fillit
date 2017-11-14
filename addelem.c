/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addelem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:41:38 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/14 10:43:22 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void addelem(arbre_b **tree, unsigned int key)
{
	arbre_b *tmp;
	arbre_b *tmpTree = *tree;

	arbre_b *elem = malloc(sizeof(arbre_b));
	elem->key = key;
	elem->left = NULL;
	elem->right = NULL;

	if (tmpTree)
	{
		while (tmpTree)
		{
			tmp = tmpTree;
			if(key > tmpTree->key )
			{
				tmpTree = tmpTree->right;
				if (!tmpTree) 
					tmp->right = elem;
			}
			else
			{
				tmpTree = tmpTree->left;
				if (!tmpTree) 
					tmp->left = elem;
			}
		}
	}
	else
		*tree = elem;
}
