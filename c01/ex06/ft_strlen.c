/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:36:44 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 16:36:18 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux = aux + 1;
	}
	return (aux);
}

/*void	main(void)
{
	char	*c = "123456789";
	int	i;
	
	i = ft_strlen(c);
	printf("%d", i);
}*/
