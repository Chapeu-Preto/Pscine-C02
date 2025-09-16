/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:33:34 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/11 13:39:39 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (0);
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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

	str1 = "12345678";
	str2 = "";
	str3 = "nada4";
	str4 = "123";
	str5 = "Brasil";
	printf("'%s' is alpha: %d\n", str1, ft_str_is_numeric(str1));
	printf("'%s' is alpha: %d\n", str2, ft_str_is_numeric(str2));
	printf("'%s' is alpha: %d\n", str3, ft_str_is_numeric(str3));
	printf("'%s' is alpha: %d\n", str4, ft_str_is_numeric(str4));
	printf("'%s' is alpha: %d\n", str5, ft_str_is_numeric(str5));
	return (0);
}
*/
