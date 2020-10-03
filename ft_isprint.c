/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 21:08:02 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:09:16 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if the given character is printable, [0] otherwise.
*/

int		ft_isprint(int nr)
{
	if (nr >= 32 && nr <= 126)
		return (1);
	else
		return (0);
}
