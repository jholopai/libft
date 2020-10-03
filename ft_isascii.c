/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 20:59:17 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:09:31 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if the given character is in the standard ASCII, [0] otherwise.
*/

int		ft_isascii(int nr)
{
	if (nr >= 0 && nr <= 127)
		return (1);
	else
		return (0);
}
