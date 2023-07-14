/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:03:49 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 18:06:24 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strlowcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
		{
			str[aux] = str[aux] + 32;
		}
		aux++;
	}
	return (str);
}

/*int	main(void)
{
	char	*src;
	int		i;

	src = (char *) malloc(15);
	strcpy(src, "AFHDFG");
	src = ft_strlowcase(src);
	for(i = 0 ; src[i] != '\0'; i++)
	{
		write(1, &src[i], 1);
	}
	free(src);
	return (0);
}*/
