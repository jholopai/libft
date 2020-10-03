/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 13:24:18 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:40:28 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the number of digits in the given number.
** In the case of negative numbers the [-] counts as a number.
*/

#include "libft.h"

int		ft_nbrlen(int n)
{
	size_t i;

	i = 1;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}
