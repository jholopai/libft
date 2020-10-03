/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:48:54 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 21:55:00 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies [n] amount of characters from src to dest. Returns [dest].
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dest);
}
