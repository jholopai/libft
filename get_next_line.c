/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 11:49:50 by jholopai          #+#    #+#             */
/*   Updated: 2020/10/03 23:06:49 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Retrieves one line ending in a newline character [\n] or the end of file
** from the given file descriptor and saves it to the given char variable. 
*/

#include "libft.h"

static int		ft_shorten_memory(char **memory, int i)
{
	char	*new_memory;

	if ((*memory)[i] == '\n')
	{
		if (!(new_memory = ft_strdup(*memory + i + 1)))
			return (-1);
		free(*memory);
		*memory = new_memory;
	}
	else
		ft_strdel(memory);
	return (1);
}

static int		ft_read_file(char **memory, int fd)
{
	ssize_t	ret;
	char	*temp;
	char	buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (*memory == NULL)
		{
			if (!(*memory = ft_strdup(buf)))
				return (-1);
		}
		else
		{
			if (!(temp = ft_strjoin(*memory, buf)))
				return (-1);
			free(*memory);
			*memory = temp;
		}
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	int			i;
	static char	*memory[MEM_SIZE];

	if (fd < 0 || !line)
		return (-1);
	if (ft_read_file(&memory[fd], fd) == -1)
		return (-1);
	if (memory[fd] == NULL || memory[fd][0] == '\0')
		return (0);
	i = 0;
	while (memory[fd][i] != '\n' && memory[fd][i] != '\0')
		i++;
	if (!(*line = ft_strsub(memory[fd], 0, i)))
		return (-1);
	if (ft_shorten_memory(&memory[fd], i) == -1)
		return (-1);
	return (1);
}
