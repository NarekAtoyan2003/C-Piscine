/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:35:37 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/12 23:33:02 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main()
{
	int div = 0;
	int mod = 0;
	int a;
	int b;
	
	a = 15;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d.%d", a, b, div, mod);
}*/
