/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:49:26 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:17:35 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Deletes all elements from the given linked list.
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	while ((*alst) != NULL)
	{
		temp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = temp;
	}
	*alst = NULL;
}
