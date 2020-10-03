/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 14:45:16 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 21:55:25 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Deletes the content of the given pointer.
*/

#include "libft.h"

void	ft_memdel(void **as)
{
	free(*as);
	*as = NULL;
}
