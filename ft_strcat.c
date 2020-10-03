/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:40:14 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 00:35:52 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Joins [src] into [dest]. [Dest] must have
** enough space to contain the both of them.
*/

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	p;
	size_t	src_len;

	i = ft_strlen(dest);
	src_len = ft_strlen(src);
	p = 0;
	while (p < src_len)
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}
