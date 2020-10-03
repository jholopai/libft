/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 20:04:16 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 21:15:02 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the given function to each element of the string and creates a
** new string with the results.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (s && f)
	{
		if (!(result = (char*)malloc(ft_strlen((char*)s) * sizeof(char) + 1)))
			return (NULL);
		while (s[i] != '\0')
		{
			result[i] = f(s[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}
