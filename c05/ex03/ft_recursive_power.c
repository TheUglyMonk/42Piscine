/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:36:06 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/20 18:38:41 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	rs;

	i = 1;
	rs = 1;
	if (power < 0 || (nb == 0 && power > 0))
		return (0);
	else if (power == 0 || (nb == 0 && power == 0))
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

/*void	main(void)
{
	int n = 4;
	printf("%d", ft_recursive_power(n, 2));
}*/

/*int	ft_recursive_power(int nb, int power);

void ft_recursive_power_test(int nb, int power)
{
	int res;

	res = ft_recursive_power(nb, power);
	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
}

int	main(void)
{
	int nb;
	int power;

	// testando potencias negativas(deve retornar 0)
	printf("[1] Potencias negativas(deve retornar 0)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = -4;
		while (power < 0)
		{
			ft_recursive_power_test(nb, power);
			power++;
		}
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[2] Potencias 0(deve retornar 1)\n");
	nb = -4;
	power = 0;
	while (nb <= 4)
	{
		ft_recursive_power_test(nb, power);
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[3] Potencias positivas(deve retornar o numero elevado a potencia)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = 1;
		while (power <= 4)
		{
			ft_recursive_power_test(nb, power);
			power++;
		}
		nb++;
	}
	return (0);
}*/
