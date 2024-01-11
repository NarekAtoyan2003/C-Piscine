/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanikin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:15:02 by zanikin           #+#    #+#             */
/*   Updated: 2023/10/22 23:02:42 by zanikin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	zero_mat(int **mat, int size);
int		unique_check(int **mat, int r, int c);
int		rules_check(int **mat, int **rules, int pos, int size);
int		vis_vert_count(int **arr, int c, int size, int sign);
int		vis_hor_count(int **arr, int r, int size, int sign);
int		vis_check(int vis_count, int needle, int pos, int size);
void	ij_calc(int *i, int *j, int k, int size);

int	rush(int **dst, int **rules, int size)
{
	int	err;
	int	i;
	int	j;
	int	k;

	err = 0;
	k = 0;
	while (k < size * size)
	{
		ij_calc(&i, &j, k, size);
		if (dst[i][j]++ < size && unique_check(dst, i, j)
				&& rules_check(dst, rules, i * 10 + j, size))
			k++;
		else if (k == 0)
		{
			err = 1;
			k = size * size;
		}
		else if (dst[i][j] >= size)
		{
			k--;
			dst[i][j] = 0;
		}
	}
	return (err);
}

void	ij_calc(int *i, int *j, int k, int size)
{
	*i = k / size;
	*j = k % size;
}

int	rules_check(int **mat, int **rules, int pos, int size)
{
	int	v_lr;
	int	v_rl;
	int	v_ud;
	int	v_du;

	v_lr = vis_hor_count(mat, pos / 10, size, 1);
	v_rl = vis_hor_count(mat, pos / 10, size, -1);
	v_ud = vis_vert_count(mat, pos % 10, size, 1);
	v_du = vis_vert_count(mat, pos % 10, size, -1);
	return (vis_check(v_lr, rules[2][pos / 10], pos % 10, size)
			&& vis_check(v_rl, rules[3][pos / 10], pos % 10, size)
			&& vis_check(v_ud, rules[0][pos % 10], pos / 10, size)
			&& vis_check(v_du, rules[1][pos % 10], pos / 10, size));
}
