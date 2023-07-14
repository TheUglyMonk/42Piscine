/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:05:50 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 21:13:11 by jlima-lo         ###   ########.fr       */
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
		aux++;
	}
}

/*void	main(void)
{
	char	*str = "Hello Piscine";
	ft_putstr(str);
}*/
