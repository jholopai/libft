/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 21:17:31 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 18:22:48 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Looks for the first occurrence of the given character in the variable. Does
** not look through more than [n] characters. If the character is found, returns
** a pointer to that point. Otherwise returns [NULL].
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_ptr;

	i = 0;
	str_ptr = (unsigned char*)str;
	while (i < n)
	{
		if (str_ptr[i] == (unsigned char)c)
			return ((void*)str + i);
		i++;
	}
	return (NULL);
}
