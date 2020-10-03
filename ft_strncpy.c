/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 22:29:03 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 00:01:13 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the content of [src] to [dest], copying at most [n] amount of
** characters. The destination string must have enough memory to hold
** the source string.
*/

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
