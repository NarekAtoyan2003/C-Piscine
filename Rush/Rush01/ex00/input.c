/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:53:26 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/22 22:37:54 by zanikin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hedr.h"
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	str_int_matrix(char *v, int **input_matrix)
{
	int	sizestr;
	int	sizearay;

	sizestr = ft_strlen(v);
	sizearay = ((sizestr + 1) / 4) / 2;
	str_int(v, input_matrix, sizearay);
}

void	str_int(char *v, int **input_matrix, int size)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (i != 4)
	{
		j = 0;
		while (j != size)
		{
			if (v[a] >= '0' && v[a] <= '9' && a % 2 == 0)
			{
				input_matrix[i][j] = v[a] - 48;
				j++;
				a++;
			}
			else if (v[a] == ' ' && a % 2 != 0)
				a++;
		}
		i++;
	}
}

int	**input(char *v)
{
	int	**input_matrix;
	int	size;

	size = ft_strlen(v);
	if (is_valid(v))
	{
		input_matrix = get_int_matrix(4, ((size + 1) / 4) / 2);
		if (input_matrix != NULL)
		{
			str_int_matrix(v, input_matrix);
			return (input_matrix);
		}
	}
	return (NULL);
}
