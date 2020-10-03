/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 21:12:00 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 21:57:59 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Fills the given string up to [n] characters with the given character.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!str)
		return (NULL);
	i = 0;
	ptr = (char*)str;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
