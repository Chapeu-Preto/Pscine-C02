/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:21:17 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/15 12:37:37 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//escrever uma funcao que deixe todas as letras minusculas

char	*ft_strlowcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "LIGHT TURISMO";

	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/
