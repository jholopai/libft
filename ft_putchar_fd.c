/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 15:42:51 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:32:18 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes given character into the file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
