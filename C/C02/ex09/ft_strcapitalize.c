/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:53:34 by naatoyan          #+#    #+#             */
/*   Updated: 2023/10/14 19:56:10 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Eli chi ashxatum

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	char	*a;

	a = str;
	while (*str != '\0')
	{
		if (*str > 'a' && *str < 'z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (a);
}

char	* ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
int	main()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf ("%s", ft_strcapitalize(a));
}
