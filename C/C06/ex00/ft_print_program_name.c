/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:49:16 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/23 23:48:23 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc = 0;
	while (argv[0][argc] != '\0')
	{
		write (1, &argv[0][argc], 1);
		argc++;
	}
	write (1, "\n", 1);
	return (0);
}
