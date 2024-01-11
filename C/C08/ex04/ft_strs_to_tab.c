/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:40:55 by naatoyan          #+#    #+#             */
/*   Updated: 2023/11/02 13:44:33 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	int		size;
	char	*dest;

	size = ft_strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * size);
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, str));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*strs;

	i = 0;
	strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (strs)
	{
		while (i != ac)
		{
			strs[i].size = ft_strlen(av[i]);
			strs[i].str = ft_strdup(av[i]);
			strs[i].copy = ft_strdup(av[i]);
			if (!(strs[i].str && strs[i].copy))
				return (NULL);
			i++;
		}
		strs[i].str = 0;
		return (strs);
	}
	else
		return (NULL);
}

int main(int argc, char *argv[])
{
	int	i;

	i = 0;
	t_stock_str *strs = ft_strs_to_tab(argc, argv);
	while (strs[i].str != 0)
	{
		printf ("%d--%s--%s\n",strs[i].size,  strs[i].copy, strs[i].str);
		i++;
	}
}
