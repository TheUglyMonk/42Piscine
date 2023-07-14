/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:46:27 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 16:52:09 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while (aux < n && src[aux] != '\0')
	{
		dest[aux] = src[aux];
		aux++;
	}
	while (aux < n)
	{
		dest[aux] = '\0';
		aux++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*dest;
	char	*src;
	unsigned int		i;
	int		aux = 0;
	
	dest = (char *) malloc(15);
	src = (char *) malloc(15);
	strcpy(dest, "destino"); 
	strcpy(src, "source");
	i = 2;
	dest = ft_strncpy(dest, src, i);
	while (dest[aux] != '\0')
	{
		write(1, &dest[aux], 1);
		aux++;
	}
	free(dest);
	free(src);
	return (0);
}*/
