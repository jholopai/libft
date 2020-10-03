/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:10:45 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 00:32:25 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Splits the given string into an array of words
** using the given character as a delimiter.
*/

#include "libft.h"

static void		ft_wipe_all(char **array, size_t rows)
{
	size_t i;

	i = 0;
	while (i < rows)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char		**ft_ret_word(char const *s, char c, char **array, size_t row)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (!(array[row] = (char*)malloc(i * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		array[row][i] = s[i];
		i++;
	}
	array[row][i] = '\0';
	return (array);
}

static char		**ft_arr_compiler(char const *s, char c, char **array)
{
	size_t i;
	size_t row;

	i = 0;
	row = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!(ft_ret_word(s + i, c, array, row)))
			{
				row++;
				ft_wipe_all(array, row);
				return (NULL);
			}
			while (s[i + 1] != c && s[i + 1] != '\0')
				i++;
			row++;
		}
		i++;
	}
	array[row] = NULL;
	return (array);
}

static int		ft_how_many(char const *s, char c)
{
	size_t	i;
	int		amount;
	size_t	length;

	i = 0;
	amount = 0;
	length = ft_strlen(s);
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c && i + 1 != length) || \
		(i == 0 && s[i] != c))
		{
			amount++;
		}
		i++;
	}
	return (amount);
}

char			**ft_strsplit(char const *s, char c)
{
	int		amount;
	char	**result;

	if (s && c)
	{
		amount = ft_how_many(s, c);
		if (!(result = (char**)malloc((amount + 1) * sizeof(char*))))
			return (NULL);
		if (!(result = ft_arr_compiler(s, c, result)))
			return (NULL);
		return (result);
	}
	return (NULL);
}
