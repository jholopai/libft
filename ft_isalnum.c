/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 20:34:10 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 22:57:19 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if the given character is a letter or a number, [0] otherwise.
*/

#include "libft.h"

int		ft_isalnum(int nr)
{
	if (ft_isalpha(nr) == 1 || ft_isdigit(nr) == 1)
		return (1);
	else
		return (0);
}
