/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:10:54 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/15 20:55:14 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"rush00.c"

int	main(int argc, char *argv[])
{
	int	x[2];

	str_int(argc, argv, x);
	if (exception(x[0], x[1]))
		rush (x[0], x[1]);
	return (0);
}
