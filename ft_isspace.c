/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 13:24:01 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 19:17:47 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns [1] if the given character is a whitespace character, [0] otherwise.
*/

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f' ||  \
	c == '\v')
		return (1);
	else
		return (0);
}
