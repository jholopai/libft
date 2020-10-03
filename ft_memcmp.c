/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:51:53 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 21:20:59 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares the two given variables. Returns [0] if they are equal.
** If an unmatching character is found, returns the result from
** subtracting [sr2]'s ASCII value from [sr1]'s.
*/

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*pointer1;
	unsigned char	*pointer2;

	i = 0;
	pointer1 = (unsigned char*)str1;
	pointer2 = (unsigned char*)str2;
	while (i < n)
	{
		if (pointer1[i] != pointer2[i])
			return (pointer1[i] - pointer2[i]);
		i++;
	}
	return (0);
}
