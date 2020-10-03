/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 13:29:31 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 12:56:09 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Trims any whitespace characters both from beginning and end of the string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	p;
	size_t	chars;
	char	*result;

	if (!s)
		return (NULL);
	i = 0;
	p = ft_strlen(s) - 1;
	while (ft_isspace(s[i]) == 1)
		i++;
	while (ft_isspace(s[p]) == 1)
		p--;
	if (i == ft_strlen(s))
		chars = 0;
	else
		chars = p - i + 1;
	if (!(result = (char*)malloc(chars * sizeof(char) + 1)))
		return (NULL);
	if (!(result = ft_strsub(s, i, chars)))
		return (NULL);
	return (result);
}
