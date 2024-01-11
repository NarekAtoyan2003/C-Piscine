/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:41:54 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/26 21:18:12 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	a = (int *)malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
/*
int	main()
{
	int min;
	int	max;
	int i;

	i = 0;
	min = 5;
	max = 10;
	int	*a = ft_rang(min, max);
	while (min != max)
	{
		printf("%d ",a[i]);
		i++;
		min++;
	}
}*/
