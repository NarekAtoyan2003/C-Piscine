/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanukya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:48:00 by emanukya          #+#    #+#             */
/*   Updated: 2023/11/01 18:30:48 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putline(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_read(void)
{
	char	*file_name;
	int		fd;
	char	buffer[1024];
	int		bytes_read;

	file_name = "numbers.dict";
	fd = open(file_name, O_RDWR);
	if (fd == -1)
	{
		ft_putstr("Error");
		return ;
	}
	else
	{
		ft_putstr(file_name);
		ft_putstr(" opened successfully!\n");
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	//printf("%d", bytes_read);
	ft_putline(buffer);
}

int	main(void)
{
	ft_read();
}
