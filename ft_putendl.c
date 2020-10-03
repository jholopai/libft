/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 16:28:29 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 13:33:44 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints out the given string followed by a newline.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
