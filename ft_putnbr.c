/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 11:27:39 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:34:54 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints out the given number.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 10 && n > -10)
	{
		if (n < 0)
		{
			ft_putchar('-');
			ft_putchar(n * (-1) + '0');
		}
		if (n >= 0)
			ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		if (n < 0)
			ft_putchar((n % 10) * (-1) + '0');
		else
			ft_putchar((n % 10) + '0');
	}
}
