/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:30:34 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/27 13:58:05 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_j(int size, char **strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i != size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	return (j);
}

void	put_sep(char *str, char sep)
{
	int	i;

	i = ft_strlen(str);
	if (i > 0)
	{
		str[i] = sep;
		str[i + 1] = '\0';
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;
	char	*str;

	i = 0;
	if (size > 0)
	{
		j = get_j(size, strs) + (size);
		str = (char *)malloc(sizeof(char) * j);
		i = 0;
		while (i != size)
		{
			put_sep(str, *sep);
			str = ft_strcat(str, strs[i]);
			i++;
		}
		a = ft_strlen(str);
		str[a + 1] = '\0';
		return (str);
	}
	else
		return (0);
}
/*
int main(int argc, char *argv[])
{
	printf("%s", ft_strjoin(argc, argv, "-"));
}
*/
