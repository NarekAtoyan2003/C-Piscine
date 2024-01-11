/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:47:30 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/20 13:32:42 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if ((i * i) == b)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d",ft_sqrt(625));
	return (0);
}
*/
