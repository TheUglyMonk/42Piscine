/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:19:09 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 18:57:06 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	aux;

	aux = 0;
	while (s1[aux] != '\0' && s2[aux] != '\0' )
	{
		if (s1[aux] != s2[aux])
		{
			return (s1[aux] - s2[aux]);
		}
		aux++;
	}
	return (s1[aux] - s2[aux]);
}
/*void	main(void)
{
	char 	*s1;
	char	*s2;

	s1 = "tomas";
	s2 = "toma";
	printf("%d", ft_strcmp(s1, s2));
}*/
