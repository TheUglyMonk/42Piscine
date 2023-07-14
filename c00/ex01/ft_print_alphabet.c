/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:12:41 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 14:59:16 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_alphabet(void)
{
	int		aux;
	char	c;

	aux = 97;
	while (aux <= 122)
	{
		c = (char)aux;
		write(1, &c, 1);
		aux++;
	}
}

/*void	main(void)
{
	ft_print_alphabet();
}*/
