/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 16:25:37 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:34:37 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes the given number into the file descriptor.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > -10 && n < 10)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd(n * (-1) + '0', fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		if (n < 0)
		{
			if (n == -2147483648)
				ft_putchar_fd('8', fd);
			else
				ft_putchar_fd((n * (-1)) % 10 + '0', fd);
		}
		if (n >= 0)
			ft_putchar_fd(n % 10 + '0', fd);
	}
}
