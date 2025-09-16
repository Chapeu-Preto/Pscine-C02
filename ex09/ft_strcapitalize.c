/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibezerr <hibezerr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:39:18 by hibezerr          #+#    #+#             */
/*   Updated: 2025/09/15 15:45:46 by hibezerr         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/
#include <ctype.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
    if (!str)
    {
        return (0);
    }

    int i = 0;
    int inicio = 1;

    while (str[i] != '\0')
    {
        if (isalnum(str[i]) && inicio)
        {
            str[i] = toupper((unsigned char)str[i]);
            inicio = 0;
        }
        else if (isalnum(str[i]) && !inicio)
        {
            str[i] = tolower((unsigned char)str[i]);
        }
        else
        {
            inicio = 1;
        }
        i++;
    }

    return str;
}
/*
int	main(void)
{
	char	str[] = "A aranha arranha o jarro o jarro arranha a aranha";
	printf("%s", ft_strcapitalize(str));
}
*/
