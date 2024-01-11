/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hedr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:19:38 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/22 22:37:31 by zanikin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEDR_H
# define HEDR_H

int		**input(char *v);
void	str_int(char *v, int **input_matrix, int size);
void	str_int_matrix(char *v, int **input_matrix);
void	print_matrix(int **input_matrix, int sizearay);
int		is_valids(char *v, int i);
int		is_valid(char *v);
int		**get_int_matrix(int i, int j);
int		ft_strlen(char *str);
void	error(void);
void	ft_putstr(char *str);
void	putmat(int **mat, int size);
int		rush(int **dst, int **rules, int size);

#endif
