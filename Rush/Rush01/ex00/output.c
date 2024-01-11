/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanikin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:29:20 by zanikin           #+#    #+#             */
/*   Updated: 2023/10/22 15:31:16 by zanikin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	putmat(unsigned int **mat, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = mat[i][j] + '0';
			write(1, &c, 1);
			if (j != size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
