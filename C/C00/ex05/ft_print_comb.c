/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:51:28 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/11 15:36:15 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char a, char b, char c);

void	printg(char a)
{
	if (a < '7')
	{
		write(2, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				print(a, b, c);
				printg(a);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
//int	main()
//{
//	ft_print_comb();
//	return (0);
//}
