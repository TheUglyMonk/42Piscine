/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:08:04 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 19:37:27 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		aux;
	int		aux1;

	aux = 0;
	aux1 = 0;
	while (dest[aux] != '\0')
	{
		aux++;
	}
	while (src[aux1] != '\0')
	{
		dest[aux] = src[aux1];
		aux++;
		aux1++;
	}
	dest[aux] = '\0';
	return (dest);
}
/*
void	main(void)
{
	char	src[] = "Primeira";
	char	dst[20] = "Segunda";
	printf("%s", ft_strcat(dst, src));
}*/
