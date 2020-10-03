/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 21:58:38 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 18:38:36 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Looks for the last occurrence of the given character in the string. If
** it is found, returns a pointer to that point. Otherwise returns [NULL].
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	 i;
	char *pointer;

	i = ft_strlen(str);
	pointer = (char*)str;
	while (pointer[--i] != '\0' && i >= 0)
	{
		if (pointer[i] == c)
			return (pointer + i);
	}
	if (c == '\0')
		return (pointer + ft_strlen(pointer));
	return (NULL);
}
