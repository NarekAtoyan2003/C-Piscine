/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:04:54 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/12 03:04:04 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	int	a;

	a = 97;
	while (a <= 122)
	{
		write (1, &a, 1);
		a++;
	}
}

int 	main(void)
{
	ft_print_alphabet();
	return (0);
}
