/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:30:32 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/19 11:23:01 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	n;

	x = 0;
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			n++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			x *= 10;
			x += str[i] - 48;
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				break ;
		}
		i++;
	}
	if (n % 2 != 0)
		x = x *(-1);
	return (x);
}
/*
int	main(int argc, char *argv[])
{
	argc = 0;

	printf("%d", ft_atoi(argv[1]));
	return 0;
}*/
