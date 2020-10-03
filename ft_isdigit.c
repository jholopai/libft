/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 20:27:29 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:09:24 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if the given character is a number, [0] otherwise.
*/

int		ft_isdigit(int nr)
{
	if (nr >= '0' && nr <= '9')
		return (1);
	else
		return (0);
}
