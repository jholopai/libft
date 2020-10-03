/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 19:23:10 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 20:31:54 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares the two given strings. Returns [0] if they are equal.
** If an unmatching character is found, returns the result from
** subtracting [sr2]'s ASCII value from [sr1]'s.
*/

#include "libft.h"

int		ft_strcmp(const char *sr1, const char *sr2)
{
	size_t i;

	i = 0;
	while (sr1[i] != '\0' || sr2[i] != '\0')
	{
		if (sr1[i] != sr2[i])
			return ((unsigned char)sr1[i] - (unsigned char)sr2[i]);
		i++;
	}
	return (0);
}
