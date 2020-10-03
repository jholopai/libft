/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 15:09:48 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 20:26:25 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the given function to all characters of the string.
** Uses the index of the character as a parameter.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
