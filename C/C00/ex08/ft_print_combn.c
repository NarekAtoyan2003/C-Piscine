/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:55:04 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/11 23:10:56 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ppp(int *tab, int n)
{
	int		i;
	bool	l;

	i = 1;
	l = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			l = 0;
		i++;
	}
	if (l)
	{
		i = 0;
		while (i < n)
			putchar(tab[i++] + 48);
		if (tab[0] < (10 - n))
		{
			putchar(',');
			putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[9];

	i = 0;
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		ppp(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
//int main(void) 
//{
//	ft_print_combn(9);
//	return 0;
//}
