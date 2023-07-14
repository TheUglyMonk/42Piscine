/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:27:41 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 16:20:35 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		write(1, &str[aux], 1);
		aux = aux + 1;
	}
}
/*void main(void)
{
	char *aux;

	aux = "ola";
	ft_putstr(aux);
}*/
