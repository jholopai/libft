/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 21:12:00 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 01:58:30 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If the given character is a uppercase letter switches it to lowerrcase.
*/

int		ft_tolower(int nr)
{
	if (nr >= 'A' && nr <= 'Z')
	{
		nr += 32;
		return (nr);
	}
	return (nr);
}
