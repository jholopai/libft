/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:51:35 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 23:04:15 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Changes the given integer into a string.
*/

#include "libft.h"

static char		*ft_convert(int length, int nb, char *sr)
{
	if (nb > -10 && nb < 10)
	{
		if (nb < 0)
		{
			sr[0] = ('-');
			sr[length] = nb * (-1) + '0';
		}
		else
			sr[length] = nb + '0';
	}
	else
	{
		ft_convert(length - 1, nb / 10, sr);
		if (nb < 0)
		{
			if (nb == -2147483648)
				sr[length] = 8 + '0';
			else
				sr[length] = (nb * (-1)) % 10 + '0';
		}
		if (nb >= 0)
			sr[length] = nb % 10 + '0';
	}
	return (sr);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		length;

	length = ft_nbrlen(n);
	if (!(result = (char*)malloc(length * sizeof(char) + 1)))
		return (NULL);
	result = ft_convert(length - 1, n, result);
	result[length] = '\0';
	return (result);
}
