/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:39 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/16 16:44:17 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	num_car(int nb)
{
	int	num;

	num = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		num = num + 1;
	}
	return (num);
}

int	mult(int num)
{
	int	multi;

	multi = 1;
	while (num != 0)
	{
		multi = multi * 10;
		num = num - 1;
	}
	return (multi);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	car;
	int	m;
	int	aux;

	if (nb < 0)
	{
		nb = nb * -1;
		put_char('-');
	}
	car = num_car(nb);
	m = mult(car);
	m = m / 10;
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		while (car != 0)
		{
			aux = nb / m;
			nb = nb % m;
			put_char(aux + 48);
			m = m / 10;
			car = car -1;
		}
	}
}

/*void	main(void)
{
	ft_putnbr(0);
}*/
