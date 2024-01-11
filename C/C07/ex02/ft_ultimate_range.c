/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:27:55 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/26 21:17:30 by naatoyan         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
	{
		return (-1);
	}
	else
		return (max - min);
}
/*
int	main()
{
	int min;
	int	max;
	int *a;
	int i;

	min = 5;
	max = 10;
	i = ft_ultimate_range(&a, min, max);
	i = 0;
	while (min != max)
	{
		printf("%d ",a[i]);
		i++;
		min++;
	}
}
*/
