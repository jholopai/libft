/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:03:12 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 23:03:11 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns an integer based on the given string. If
** there is no proper integer to be found, returns [0].
*/

#include "libft.h"

int				ft_atoi(const char *str)
{
	int i;
	int result;
	int if_negative;

	i = ft_hop_space(str);
	result = 0;
	if_negative = 1;
	if (str[i] == '-')
		if_negative = -1;
	if ((str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 1)
			result = result * 10 + str[i] - '0';
		else
			return (result * if_negative);
		i++;
	}
	return (result * if_negative);
}
