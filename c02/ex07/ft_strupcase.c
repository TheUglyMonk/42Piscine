/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:56:34 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 18:06:44 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strupcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'a' && str[aux] <= 'z')
		{
			str[aux] = str[aux] - 32;
		}
		aux++;
	}
	return (str);
}

/*void	main(void)
{
	char	*src;
	int		i;

	src = (char *) malloc(15);
	strcpy(src, "hdfgs");
	src = ft_strupcase(src);
	for(i=0 ; src[i] != '\0'; i++)
	{
		write(1, &src[i], 1);
	}
	free(src);
}*/
