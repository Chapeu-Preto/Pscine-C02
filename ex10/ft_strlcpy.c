/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:46:46 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/15 16:40:57 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size > 0)
	{
		while (j < size -1 && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	unsigned int	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("dest: %s\n", dest);
	printf("Length of src: %u\n", len);
	return (0);
}
