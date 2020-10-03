/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 22:53:51 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 01:56:29 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a new string from the original one based on the given parameters.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	p;
	char	*result;

	if (!s)
		return (NULL);
	i = 0;
	p = start;
	if (!(result = (char*)malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (i < len)
	{
		result[i] = s[p];
		i++;
		p++;
	}
	result[i] = '\0';
	return (result);
}
