/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 20:56:01 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 00:37:18 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Joins [src] into [dest], not joining more than [n] characters from [src].
** [Dest] must have enough space to contain the both of them.
*/

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	p;
	size_t	src_len;

	i = ft_strlen(dest);
	src_len = ft_strlen(src);
	p = 0;
	while (p < src_len && p < n)
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}
