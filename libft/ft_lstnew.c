/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 08:50:28 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/12 14:49:27 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*content1;

	content1 = (void *)content;
	list = malloc(sizeof(t_list));
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else if (list)
	{
		if (!(list->content = malloc(sizeof(t_list) * content_size)))
			return (NULL);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
