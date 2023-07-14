/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:25:29 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 20:59:59 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		aux;
	unsigned int		aux1;
	unsigned int		aux3;

	aux = 0;
	aux1 = 0;
	aux3 = 0;
	while (dest[aux] != '\0')
	{
		aux++;
	}
	while (src[aux3] != '\0')
	{
		aux3++;
	}
	while (src[aux1] != '\0' && aux < size)
	{
		dest[aux] = src[aux1];
		aux++;
		aux1++;
	}
	if (aux < size)
		dest[aux] = '\0';
	return (aux);
}

/*int	main(void)
{
	char src[20] = "Primeira";
	char dst[50] = "Segunda";
	printf("%d", ft_strlcat(dst, src, 10));
}*/
