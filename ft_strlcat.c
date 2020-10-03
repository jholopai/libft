/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 21:20:05 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 00:53:47 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Joins the two given strings. Returns the total lenght of the strings.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	e;
	size_t	p;

	i = 0;
	e = ft_strlen(dest);
	p = ft_strlen(dest);
	while (src[i] != '\0' && e < size)
	{
		dest[e] = src[i];
		i++;
		e++;
	}
	while (e < size)
	{
		dest[e] = '\0';
		e++;
	}
	if (dest[size - 1] != '\0' && size > p)
		dest[size - 1] = '\0';
	if (size < p)
		p = (char)size;
	return (p + ft_strlen(src));
}
