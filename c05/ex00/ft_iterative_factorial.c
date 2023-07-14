/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:14:26 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/20 18:20:04 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rs;

	i = 1;
	rs = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		rs = i * rs;
		i++;
	}
	return (rs);
}

/*void	main(void)
{
	int n = 4;
	printf("%d", ft_iterative_factorial(n));
}*/

/*int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}*/
