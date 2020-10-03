/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 21:48:03 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 18:27:41 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Looks for the first occurrence of the given character in the string. If
** it is found, returns a pointer to that point. Otherwise returns [NULL].
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t i;
	char *result;

	if (!str)
		return (NULL);
	i = 0;
	result = (char*)str;
	while (result[i] != '\0')
	{
		if (result[i] == c)
			return (result + i);
		i++;
	}
	if (c == '\0')
		return (result + i);
	return (NULL);
}
