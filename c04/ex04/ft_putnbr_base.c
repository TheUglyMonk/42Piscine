/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:48:06 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/20 16:57:06 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *a)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (a[0] == '\0' || a[1] == '\0')
		return (0);
	while (a[i])
	{
		z = i + 1;
		if (a[i] == '+' || a[i] == '-')
			return (0);
		if (a[i] < 32 || a[i] > 126)
			return (0);
		while (a[z])
		{
			if (a[i] == a[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}

/*int	main(void)
{
	char	*base;
	int		nbr;

	base = (char *)malloc(20);
	nbr = 780;
	strcpy(base, "0123456789ABCDEF");
	ft_putnbr_base(nbr, base);
	free(base);
}*/
