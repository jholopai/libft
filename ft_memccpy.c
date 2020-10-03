/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 21:05:54 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 17:54:42 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies [n] amount of characters from src to dest, or until a [c] is found.
** Returns pointer to the first character after [c] or [NULL] if the character
** isn't found.
*/

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	found_c;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (dest || src)
	{
		i = 0;
		found_c = (unsigned char)c;
		ptr = (unsigned char*)dest;
		ptr2 = (unsigned char*)src;
		while (i < n)
		{
			if (ptr2[i] == found_c)
			{
				*ptr = ptr2[i];
				return (ptr + 1);
			}
			*ptr = ptr2[i];
			i++;
			ptr++;
		}
	}
	return (NULL);
}
