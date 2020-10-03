/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 10:55:19 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 20:21:28 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a string of the given size and initializes it to [\0].
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*pointer;

	i = 0;
	if (!(pointer = (char*)malloc(size + 1)))
		return (NULL);
	while (i < size)
	{
		pointer[i] = '\0';
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
