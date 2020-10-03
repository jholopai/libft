/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 21:38:12 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:20:39 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function given as parameter to each element of the
** linked list and returns a fresh linked list based on the results.
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start;
	t_list *result;
	t_list *output;

	if (lst && f)
	{
		result = f(lst);
		lst = lst->next;
		start = result;
		while (lst != NULL)
		{
			output = f(lst);
			result->next = ft_lstnew(output->content, output->content_size);
			lst = lst->next;
			result = result->next;
		}
		return (start);
	}
	return (NULL);
}
