/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 16:15:29 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:33:23 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes the given string followed by a newline into the file descriptor.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
