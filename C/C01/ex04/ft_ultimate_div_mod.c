/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:11:46 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/12 23:35:22 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;
	int	x;

	x = 0;
	z = 0;
	if (*b != 0)
	{
		z = *a / *b;
		x = *a % *b;
	}
	*a = z;
	*b = x;
}
/*
int main(void)
{
	int a;
	int b;

	a = 15;
	b = 3;
	printf("%d / %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf(" = %d.%d", a, b);
}*/
