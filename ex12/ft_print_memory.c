/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:52:15 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/16 11:42:56 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_puthex(unsigned long long nbr, int digits)
{
	char	*base = "0123456789abcdef";

	if (digits > 1)
		ft_puthex(nbr >> 4, digits -1);
	ft_putchar(base[nbr & 0xf]);
}

static int	ft_isprint(unsigned char c)
{
	return (c >= 32 && c <= 126);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	if (size == 0)
		return (addr);
	i = 0;
	while (i < size)
	{
		ft_puthex((unsigned long long)(ptr + i), 16);
		ft_putchar(':');
		ft_putchar(' ');
		while (j < 16)
		{
			if (i + j < size)
				ft_puthex(ptr[i + j], 2);
			else
				write(1, " ", 2);
			if (j % 2 == 1)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		while (j < 16 && (i + j) < size)
		{
			if (ft_isprint(ptr[i + j]))
				ft_putchar(ptr[i + j]);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
/*
int	main(void)
{
	char	str[] = "Bonjour les aminches.\nLol.";
	ft_print_memory(str, sizeof(str));
	return (0);
}
*/
