/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 15:29:27 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 00:00:38 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the content of [src] to [dest]. The destination
** string must have enough memory to hold the source string.
*/

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
