/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 23:40:54 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:23:07 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates a memory slot of the given size and initializes it to [\0].
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*pointer;

	if (!(pointer = (void*)malloc(size)))
		return (NULL);
	ft_bzero(pointer, size);
	return (pointer);
}
