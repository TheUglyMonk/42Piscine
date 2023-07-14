/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:01:23 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/21 14:58:50 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	main(int argc, char *argv[])
{
	int	aux;
	int	aux1;

	aux = 0;
	aux1 = 1;
	while (aux1 < argc)
	{
		while (argv[aux1][aux] != '\0')
		{
			write(1, &argv[aux1][aux], 1);
			aux++;
		}
		ft_putchar('\n');
		aux1++;
		aux = 0;
	}
}	
