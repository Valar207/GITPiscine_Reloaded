/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:55:58 by vrossi            #+#    #+#             */
/*   Updated: 2019/04/04 16:25:40 by vrossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "lib.h"
#include <fcntl.h>

void	disp_file(int fd)
{
	char	buf[4096 + 1];
	int		ret;

	while ((ret = read(fd, buf, 4096)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int ac, char *av[])
{
	int		fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		disp_file(fd);
		close(fd);
		return (0);
	}
	else if (ac < 2)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	return (0);
}
