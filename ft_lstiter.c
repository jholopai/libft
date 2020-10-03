/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 21:20:26 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:16:53 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function given as parameter to each element of the linked list.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		while (lst != NULL)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
