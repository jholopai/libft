/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:30:25 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:47:14 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a new t_list element.
*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		node->content = (void*)malloc(content_size * sizeof(void));
		if (!node->content)
		{
			free(node);
			return (NULL);
		}
		node->content = ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	else
	{
		node->content = NULL;
		node->content_size = 0;
	}
	node->next = NULL;
	return (node);
}
