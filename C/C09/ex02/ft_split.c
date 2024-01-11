/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:26:53 by naatoyan          #+#    #+#             */
/*   Updated: 2023/11/02 14:18:51 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool	is_charset(char s, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (s == charset[i])
			return (true);
		i++;
	}
	return (false);
}

char	*get_str(char *charset, char *str, int i)
{
	int		a;
	char	*s;

	a = 0;
	while (!is_charset(str[i], charset) && str[i])
	{
		i++;
		a++;
	}
	s = (char *)malloc(sizeof(char) * (a + 1));
	return (s);
}

char	**get_matrix(char *str, char *charset)
{
	int		i;
	int		a;
	char	**s;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset))
		{
			i++;
		}
		else
		{
			a++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
	}
	s = (char **)malloc(sizeof(char *) * (a + 1));
	return (s);
}

char	**null(char **s, char *charset, int j, char str)
{
	if (is_charset(str, charset))
		s[j - 1] = 0;
	else
		s[j] = 0;
	return (s);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	char	**s;

	i = 0;
	j = 0;
	s = get_matrix(str, charset);
	while (str[i] != '\0')
	{	
		while (is_charset(str[i], charset) && str[i])
			i++;
		s[j] = get_str(charset, str, i);
		len = 0;
		while (!is_charset(str[i], charset) && str[i])
		{
			s[j][len] = str[i];
			i++;
			len++;
		}
		s[j][len] = '\0';
		++j;
	}
	s = null(s, charset, j, str[i - 1]);
	return (s);
}

int	main(int argc, char *argv[])
{
	char **s;

	argc = 0;
	s = ft_split(argv[1], argv[2]);
	while (s[argc] != 0)
	{
		printf("%s", s[argc]);
		printf("\n");
		argc++;
	}
}
