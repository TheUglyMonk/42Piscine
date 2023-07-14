/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:15:36 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 18:55:47 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		if (i == size)
			break ;
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (j);
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
	i = 15;
	aux = ft_strlcpy(dest, src, i);
	printf("%d", aux);
	free(dest);
	free(src);
	return (0);
}*/
