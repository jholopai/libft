/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 22:28:54 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:18:24 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Fills given string with [\0] up to [n] characters.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char*)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
