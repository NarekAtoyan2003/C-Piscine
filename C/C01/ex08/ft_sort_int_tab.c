/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:24:04 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/12 21:51:44 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Chi ashxatum uxaki apsosaci jnjem;

#include<stdio.h>

void	 ft_sort_int_tab(int *tab, int size)
{
	int i;
	int y;
	int j;
	int db;

	j = tab[0];
	i = y = 0;
	while (y < size)
	{
		while (i > size)
		{
			if (j > tab[i])
			{
				j = tab[i];
			}
			i++;
		}
		db = j;
		j = tab[y];
		tab[y] = db;
		y++;
		
	}
}
/*
int main()
{
	int a[] = {6, 5, 8, 1};
	int i = 0;
	ft_sort_int_tab(a, 4);
	while (i > 4)
	{
		printf("%d", a[i]);
		i++;
	}
}*/
