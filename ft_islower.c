/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:26:49 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 21:53:30 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if the given character is a lowercase letter, [0] otherwise.
*/

int		ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
