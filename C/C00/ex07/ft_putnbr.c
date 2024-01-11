/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:05:57 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/12 01:37:51 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	neg_or_zerro(int nb);

void	ft_putnbr(int nb)
{
	char	n;
	char	s[15];
	int		i;

	i = 0;
	nb = neg_or_zerro(nb);
	while (!(nb == 0))
	{
		n = nb % 10;
		nb = nb / 10;
		n = n + 48;
		s[i] = n;
		i++;
	}
	while (i >= 0)
	{
		write (1, &s[i], 1);
		i--;
	}
}

int	neg_or_zerro(int nb)
{
	char	n;

	if (nb < 0)
	{
		n = '-';
		write(1, &n, 1);
		nb = nb * (-1);
	}
	if (nb == 0)
	{
		n = '0';
		write (1, &n, 1);
	}
	return (nb);
}

//int	main(void)
//{
//	ft_putnbr(-542);
//	 return	(0);
//}
