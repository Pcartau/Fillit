/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 09:17:25 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/12 14:47:26 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	void	*tmp;
	t_list	*list;

	list = *alst;
	tmp = (void *)list->content_size;
	del(list->content, list->content_size);
	free(list);
	list = list->next;
	*alst = NULL;
}
