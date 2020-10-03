/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 21:40:31 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 01:53:25 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If the given character is a lowercase letter switches it to uppercase.
*/

int		ft_toupper(int nr)
{
	if (nr >= 'a' && nr <= 'z')
	{
		nr -= 32;
		return (nr);
	}
	return (nr);
}
