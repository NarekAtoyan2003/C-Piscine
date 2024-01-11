/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:09:13 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/21 15:37:29 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (42);
		else if (s1[i] < s2[i])
			return (-42);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d", ft_strncmp("Hallo", "Halloi", 10));
}*/
