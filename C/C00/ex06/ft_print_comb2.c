/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:35:56 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/11 17:11:06 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_char(char n)
{
	write(1, &n, 1);
}

void	print(int a, int b)
{
	put_char((a / 10) + 48);
	put_char((a % 10) + 48);
	put_char(' ');
	put_char((b / 10) + 48);
	put_char((b % 10) + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			if (!(a == 98 && b == 99))
			{
				put_char(',');
				put_char(' ');
			}
			b++;
		}
		a++;
	}
}

//int	main(void)
//{
//	 ft_print_comb2();
//	 return (0);
//}
