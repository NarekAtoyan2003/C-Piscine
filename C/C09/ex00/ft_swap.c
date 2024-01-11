/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:51:10 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/12 18:29:59 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}
/*
int main()
{
	int *a;
	int *b;
	int z;
	int x;

	z = 45;
	x = 66;
	a = &z;
	b = &x;
	ft_swap(a, b);
	printf("%d %d",x,z);
	return 0;
}*/
