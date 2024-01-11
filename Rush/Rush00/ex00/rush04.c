/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:10:17 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/15 20:41:45 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdbool.h>
#include"ft_putchar.c"

void	ifelse(int x, int y, int i, int j);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i != y)
	{
		while (j != x)
		{
			ifelse(x, y, i, j);
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}

void	ifelse(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0)
		|| ((i == (y - 1) && i != 0 && j == (x - 1) && j != 0)))
	{
		ft_putchar('A');
	}
	else if ((i == 0 && j == (x - 1)) || (i == (y - 1) && j == 0))
	{
		ft_putchar('C');
	}
	else if (j == 0 || j == (x - 1) || i == 0 || i == (y - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	str_int(int c, char *v[], int x[])
{
	int	a;
	int	i;

	x[0] = 0;
	x[1] = 0;
	a = 1;
	if (c > 2)
	{
		while (a != 3)
		{
			i = 0;
			while (v[a][i] != '\0')
			{
				if (v[a][i] >= '0' && v[a][i] <= '9')
				{
					x[a - 1] *= 10;
					x[a - 1] += v[a][i] - 48;
					if (!(v[a][i + 1] >= '0' && v[a][i + 1] <= '9'))
						break ;
				}
				++i;
			}
			++a;
		}
	}
}

bool	exception(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (false);
	}
	else
	{
		return (true);
	}
}
