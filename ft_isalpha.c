/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 12:33:11 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/26 23:09:39 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if given character is an alphabetical letter, [0] otherwise.
*/

int		ft_isalpha(int nr)
{
	if ((nr > 64 && nr < 91) || (nr > 96 && nr < 123))
		return (1);
	else
		return (0);
}
