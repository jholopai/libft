/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 15:52:56 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:35:24 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes the given string into the file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
