/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:44:26 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 17:47:09 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'a' && str[aux] <= 'z')
		{
			aux++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*void	main(void)
{
	char	*src;
	int		i;

	src = (char *) malloc(15);
	strcpy(src, "soAurce");
	i = ft_str_is_lowercase(src);
	printf("%d", i);
	free(src);
}*/
