/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 12:41:20 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 17:19:32 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a duplicate of the given string.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	letter;
	size_t	length;
	char	*pointer;

	if (!src)
		return (NULL);
	letter = 0;
	length = ft_strlen(src);
	if (!(pointer = (char*)malloc(length * sizeof(char) + 1)))
		return (NULL);
	while (src[letter] != '\0')
	{
		pointer[letter] = src[letter];
		letter++;
	}
	pointer[letter] = '\0';
	return (pointer);
}
