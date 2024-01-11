/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:02:06 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/15 22:39:00 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
int main()
{
	int n = 10;
	char dest[n];
	printf("%s",ft_strncpy(dest, "Nare",n));
}*/
