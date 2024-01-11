/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:58:55 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/21 15:48:17 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	argc = argc - 1;
	while (argc != 0)
	{
		j = 0;
		while (argv[argc][j] != '\0')
		{
			write (1, &argv[argc][j], 1);
			j++;
		}
		write (1, "\n", 1);
		argc--;
	}
	return (0);
}
