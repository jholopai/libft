/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 22:33:29 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 20:28:46 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a new string that is the two given strings combined.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	len2;
	char	*result;

	if (s1 && s2)
	{
		i = -1;
		len2 = ft_strlen(s2);
		if (!(result = (char*)malloc(ft_strlen(s1) + len2 * sizeof(char) \
		+ 1)))
			return (NULL);
		while (s1[++i] != '\0')
			result[i] = s1[i];
		while (*s2 != '\0')
		{
			result[i++] = *s2;
			s2++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}
