/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:25:29 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 22:55:59 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if the given character is an uppercase letter, [0] otherwise.
*/

int		ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
