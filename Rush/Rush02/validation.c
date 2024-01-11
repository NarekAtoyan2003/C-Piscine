/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:31:23 by arturhar          #+#    #+#             */
/*   Updated: 2023/10/29 13:52:31 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	validation(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == '0' && argv[i + 1] == '\0')
			return (0);
		if ((argv[i] >= 33 && argv[i] <= 47)
			|| (argv[i] >= 58 && argv[i] <= 64)
			|| (argv[i] >= 91 && argv[i] <= 96)
			|| (argv[i] >= 65 && argv[i] <= 90)
			|| (argv[i] >= 97 && argv[i] <= 122)
			|| argv[i] >= 126)
			return (-1);
		i++;
	}
	return (1);
}
