/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:44:45 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/11 15:56:38 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (0);
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = "eu";
	str2 = "";
	str3 = "nada4";
	str4 = "para proxima";
	str5 = "rodada";
	printf("'%s' is alpha: %d\n", str1, ft_str_is_alpha(str1));
	printf("'%s' is alpha: %d\n", str2, ft_str_is_alpha(str2));
	printf("'%s' is alpha: %d\n", str3, ft_str_is_alpha(str3));
	printf("'%s' is alpha: %d\n", str4, ft_str_is_alpha(str4));
	printf("'%s' is alpha: %d\n", str5, ft_str_is_alpha(str5));
	return (0);
}
