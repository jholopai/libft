/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 22:10:47 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 21:15:38 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the given function to each element of the string and creates a
** new string with the results. The given function will take the character's
** index as the second parameter.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	if (s && f)
	{
		i = 0;
		if (!(result = (char*)malloc(ft_strlen(s) * sizeof(char) + 1)))
			return (NULL);
		while (s[i] != '\0')
		{
			result[i] = f(i, s[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}
