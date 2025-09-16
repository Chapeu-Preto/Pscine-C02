/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:45:05 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/11 15:49:23 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	char	*str5;

	str1 = "Benjamim";
	str2 = "";
	str3 = "me chamo";
	str4 = "luzia";
	str5 = "123";
	printf("'%s' is lowercase: %d\n", str1, ft_str_is_lowercase(str1));
	printf("'%s' is lowercase: %d\n", str2, ft_str_is_lowercase(str2));
	printf("'%s' is lowercase: %d\n", str3, ft_str_is_lowercase(str3));
	printf("'%s' is lowercase: %d\n", str4, ft_str_is_lowercase(str4));
	printf("'%s' is lowercase: %d\n", str5, ft_str_is_lowercase(str5));
}
*/
