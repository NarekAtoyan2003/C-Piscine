/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:51:18 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/31 23:08:44 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "hedr.h"

void	error(void)
{
	write (1, "Error", 5);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	**get_int_matrix(int i, int j)
{
	int	**matrix;
	int	k;

	matrix = (int **)malloc(sizeof(int *) * i);
	
	if (!matrix)
		return (NULL);
	k = -1;
	while (++k < i)
	{
		matrix[k] = (int *)malloc(sizeof(int) * j);
		if (!matrix)
		{
			j = -1;
			while (++j < k)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
	}
	return (matrix);
}

int	is_valids(char *v, int i)
{
	i = 0;
	while (v[i] != '\0')
	{
		if (v[i] >= '0' && v[i] <= '9' && i % 2 == 0)
			i++;
		else if (v[i] == ' ' && i % 2 != 0)
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}

int	is_valid(char *v)
{
	int	i;

	i = ft_strlen(v);
	if ((i + 1) % 4 == 0)
	{
		return (is_valids(v, i));
	}
	return (0);
}
