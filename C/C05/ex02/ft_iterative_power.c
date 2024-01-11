/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:55:35 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/19 12:23:21 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power != 0)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
/*
int main()
{
	printf("%d", ft_iterative_power(7, 0));
}*/
