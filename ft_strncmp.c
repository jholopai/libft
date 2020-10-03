/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 22:07:28 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 20:32:48 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares the two given strings up to [n] characters. Returns [0] if they
** are equal. If an unmatching character is found, returns the result from
** subtracting [sr2]'s ASCII value from [sr1]'s.
*/

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
