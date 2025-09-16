/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:56:32 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/11 13:43:59 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}
/*
int	main(void)
{
	char	*partida;
	char	chegada[20];

	partida = "copiando funcao";
	ft_strcpy(chegada, partida);
	write(1, chegada, sizeof(chegada));
	return (0);
}
*/
