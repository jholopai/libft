/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hop_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:21:40 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 19:17:58 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Hops over any whitespace character at the beginning of the string
** and returns the index of the first non-whitespace character.
*/

#include "libft.h"

int		ft_hop_space(const char *str)
{
	int i;

	if (!str)
		return 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	return (i);
}
