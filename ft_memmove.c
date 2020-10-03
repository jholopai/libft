/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 21:07:43 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/27 21:56:48 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies [str2] to [str1] safely without potential overwriting hazards.
** Returns [str1].
*/

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	size_t	rounds;
	char	*ptr_str1;
	char	*ptr_str2;

	if ((str1 == NULL && str2 == NULL) || n == 0)
		return (str1);
	i = n - 1;
	rounds = 0;
	ptr_str1 = (char*)str1;
	ptr_str2 = (char*)str2;
	if (str1 > str2)
	{
		while (rounds < n)
		{
			ptr_str1[i] = ptr_str2[i];
			rounds++;
			i--;
		}
	}
	else
		ft_memcpy(str1, str2, n);
	return (str1);
}
