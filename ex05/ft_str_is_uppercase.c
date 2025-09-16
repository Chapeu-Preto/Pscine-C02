/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:51:07 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/15 09:25:00 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "minuscula";
	str2 = "MAIUSCULA";
	str3 = "";
	str4 = "123";
	printf("'%s' -> %d\n", str1, ft_str_is_uppercase(str1));
	printf("'%s' -> %d\n", str2, ft_str_is_uppercase(str2));
	printf("'%s' -> %d\n", str3, ft_str_is_uppercase(str3));
	printf("'%s' -> %d\n", str4, ft_str_is_uppercase(str4));
}
*/
