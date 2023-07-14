/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:43:25 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/13 18:35:36 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	char	aux;
	int		i;

	i = 48;
	while (i < 58)
	{
		aux = (char)i;
		write(1, &aux, 1);
		i++;
	}
}
/*void	main(void)
{
	ft_print_numbers();
}*/
