/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 11:20:18 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:35:46 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints out the given string.
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
