/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:49:01 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/31 23:10:25 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "hedr.h"

void	fill_zeroes(int **mat, int size);
void	free_mat(int **mat, int r);
void	init(int *size, int *err, int ***input_matrix, int ***output_matrix);

int	my_main(int argc, char *argv[])
{
	int	**input_matrix;
	int	**output_matrix;
	int	size;
	int	err;

	init(&size, &err, &input_matrix, &output_matrix);
	if (argc == 2 && is_valid(argv[1]))
	{
		input_matrix = input(argv[1]);
		if (input_matrix)
		{
			size = (ft_strlen(argv[1]) + 1) / 4 / 2;
			output_matrix = get_int_matrix(size, size);
			fill_zeroes(output_matrix, size);
			err = rush(output_matrix, input_matrix, size);
			free_mat(input_matrix, 4);
		}
	}
	if (err)
		error();
	else
		putmat(output_matrix, size);
	free_mat(output_matrix, size);
	return (err);
}

int main(int argc, char **argv)
{
	my_main(argc, argv);
	while(1)
	{

	}
}

void	init(int *size, int *err, int ***input_matrix, int ***output_matrix)
{
	*err = 1;
	*size = 0;
	*input_matrix = 0;
	*output_matrix = 0;
}

void	fill_zeroes(int **mat, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
			mat[i][j++] = 0;
		i++;
	}
}

void	free_mat(int **mat, int r)
{
	int	i;

	i = 0;
	while (i < r)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}
