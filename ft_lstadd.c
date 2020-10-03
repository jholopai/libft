/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:40:27 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:17:49 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds a new t_list-element at the end of the linked list.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
