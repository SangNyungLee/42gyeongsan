/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee <sanglee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:25:03 by sanglee           #+#    #+#             */
/*   Updated: 2024/11/21 19:35:04 by sanglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	check_remain(char **remainder, char **line)
{
	if (*remainder)
		*line = ft_strdup(*remainder);
	else
		*line = ft_strdup("");
	if (!*line)
		return (0);
	return (1);
}

char	*handle_end(ssize_t bytes_read, char *line, char **remainder)
{
	char	*newline;

	if (bytes_read <= 0 && !line[0])
	{
		free(line);
		if (*remainder)
		{
			free(*remainder);
			*remainder = NULL;
		}
		return (NULL);
	}
	newline = ft_strchr(line, '\n');
	if (newline && *(newline + 1) != '\0')
	{
		if (*remainder)
			free(*remainder);
		*remainder = ft_strdup(newline + 1);
		*(newline + 1) = '\0';
		return (line);
	}
	free(*remainder);
	*remainder = NULL;
	return (line);
}

int	init_buffer(int fd, char **buff, char **remainder)
{
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1024)
	{
		if (*remainder)
			free(*remainder);
		return (0);
	}
	*buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!*buff)
	{
		free(*buff);
		free(*remainder);
		return (0);
	}
	return (1);
}

static void	update_re(char **remainder, char *newline, char *buff)
{
	if (*remainder)
		free(*remainder);
	*remainder = ft_strdup(newline + 1);
	*(newline + 1) = '\0';
	free(buff);
}

char	*get_next_line(int fd)
{
	static char	*remainder[1025];
	char		*buff;
	char		*line;
	char		*newline;
	ssize_t		bytes_read;

	// 줄 수 줄이면 웬만한거 다 해결됨
	if (fd < 0)
		return (NULL);
	if (!init_buffer(fd, &buff, &remainder[fd]))
		return (NULL);
	if (!check_remain(&remainder[fd], &line))
		return (NULL);
	bytes_read = read(fd, buff, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buff[bytes_read] = '\0';
		line = ft_strjoin(line, buff);
		newline = ft_strchr(line, '\n');
		if (newline)
		{
			update_re(&remainder[fd], newline, buff);
			return (line);
		}
		bytes_read = read(fd, buff, BUFFER_SIZE);
	}
	free(buff);
	return (handle_end(bytes_read, line, &remainder[fd]));
}
