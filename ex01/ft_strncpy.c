/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:36:45 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/11 13:43:27 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	*aqui;
	char	ali[10];

	aqui = "Benjamim1";
	ft_strncpy(ali, aqui, 3);
	write(1, ali, 3);
	return (0);
}
*/
