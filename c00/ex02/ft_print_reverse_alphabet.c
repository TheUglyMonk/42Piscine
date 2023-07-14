/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:36:15 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/13 18:35:06 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		aux;

	aux = 122;
	while (aux >= 97)
	{
		c = (char)aux;
		write(1, &c, 1);
		aux--;
	}
}

/*void	main(void)
{
	ft_print_reverse_alphabet();
}*/
