/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_checkers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanikin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:17:42 by zanikin           #+#    #+#             */
/*   Updated: 2023/10/22 22:57:51 by zanikin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	vis_vert_count(int **arr, int c, int size, int sign)
{
	int	i;
	int	prev_big;
	int	count;
	int	init;

	i = 0;
	prev_big = 0;
	count = 0;
	init = 0;
	if (sign < 0)
		init = size - 1;
	while (i < size)
	{
		if (arr[init + sign * i][c] > prev_big)
		{
			prev_big = arr[init + sign * i][c];
			count++;
			if (prev_big == size)
				i = size;
		}
		i++;
	}
	return (count);
}

int	vis_hor_count(int **arr, int r, int size, int sign)
{
	int	i;
	int	prev_big;
	int	count;
	int	init;

	i = 0;
	init = 0;
	prev_big = 0;
	count = 0;
	if (sign < 0)
		init = size - 1;
	while (i < size)
	{
		if (arr[r][init + sign * i] > prev_big)
		{
			prev_big = arr[r][init + sign * i];
			count++;
			if (prev_big == size)
				i = size;
		}
		i++;
	}
	return (count);
}

int	vis_check(int vis_count, int needle, int pos, int size)
{
	return (size - 1 > pos || vis_count == needle);
}

int	unique_check(int **mat, int r, int c)
{
	int	i;
	int	j;
	int	unique;

	i = 0;
	unique = 1;
	j = 0;
	while (unique && i < c)
	{
		if (mat[r][c] != mat[r][i])
			i++;
		else
			unique = 0;
	}
	while (unique && j < r)
	{
		if (mat[r][c] != mat[j][c])
			j++;
		else
			unique = 0;
	}
	return (unique);
}
