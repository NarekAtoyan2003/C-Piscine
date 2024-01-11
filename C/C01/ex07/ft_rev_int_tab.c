/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:55:34 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/14 18:45:45 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	e;
	int	t;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		t = tab[s];
		tab[s] = tab[e];
		tab[e] = t;
		s++;
		e--;
	}
}
/*
int main()
{
	int a = 4;
	int i = 0;
	int	tab[4] = {1,8,9,0};
	while (i != a)
	{
		printf("%d ",tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_rev_int_tab(tab, a);
	while (i != a)
	{
		printf("%d",tab[i]);
		i++;
	}
}*/
