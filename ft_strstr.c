/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 14:09:02 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 18:49:30 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Looks for the given needle from the haystack. If it is found, returns a
** pointer to the beginning of it in the haystack. If not, returns [NULL].
*/

#include "libft.h"

static int		ft_match(const char *haystack, const char *needle)
{
	size_t i;

	i = 0;
	while (*haystack == needle[i] && needle[i] != '\0' && *haystack != '\0')
	{
		i++;
		haystack++;
	}
	if (i == ft_strlen(needle))
	{
		return (1);
	}
	return (2);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	char *result;

	if (!haystack || !needle)
		return (NULL);
	if (needle[0] == '\0')
		return ((char*)haystack);
	i = 0;
	result = (char*)haystack;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (ft_match(haystack + i, needle) == 1)
				return (result + i);
		}
		i++;
	}
	return (NULL);
}
