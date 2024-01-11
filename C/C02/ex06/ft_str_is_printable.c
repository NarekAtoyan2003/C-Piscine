/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:53:58 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/17 21:26:21 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	char	ch;

	if (!str || *str == '\0')
		return (1);
	ch = *str;
	while (ch != '\0')
	{
		if (!(ch >= 32 && ch <= 126))
			return (0);
		ch = *(++str);
	}
	return (1);
}
/*
int	main()
{
	printf("%d",ft_str_is_printable("wbbsd bhcb"));
}*/
