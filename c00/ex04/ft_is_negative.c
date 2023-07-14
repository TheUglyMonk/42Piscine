/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:49:08 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/13 18:36:00 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	ng;

	p = 'P';
	ng = 'N';
	if (n < 0)
	{
		write(1, &ng, 1);
	}
	else
	{	
		write(1, &p, 1);
	}
}

/*void	main(void)
{
	int	i;

	i = -5;
	ft_is_negative(i);
}*/
