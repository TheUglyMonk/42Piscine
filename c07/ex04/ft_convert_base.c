/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:41:26 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/22 21:41:28 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	hex_to_int(char *nbr, long i, long j);
int	oct_to_int(char *nbr);
int	bin_to_int(char *nbr);
int	dec_to_int(char *nbr);
int	ft_strcmp(char *s1, char *s2);

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

int	char_to_int(char *nbr, char *base_from)
{
	long	n;
	long	m;

	m = 0;
	n = 0;
	if (ft_strcmp(base_from, "0123456789ABCDEF") == 0)
		n = hex_to_int(nbr, n, m);
	else if (ft_strcmp(base_from, "01234567") == 0)
		n = oct_to_int(nbr);
	else if (ft_strcmp(base_from, "0123456789") == 0)
		n = dec_to_int(nbr);
	else if (ft_strcmp(base_from, "01") == 0)
		n = bin_to_int(nbr);
	return (n);
}

void	char_rev(char *tab, int size)
{
	char	aux1;
	int		aux;
	int		cont;

	aux = size - 1;
	cont = 0;
	if (tab[cont] == '-')
	{
		cont = 1;
	}
	while (cont < (size / 2))
	{
		aux1 = tab[cont];
		tab[cont] = tab[aux];
		tab[aux] = aux1;
		cont++;
		aux--;
	}
}

char	*int_to_base(long nbr, char *base)
{
	long	aux;
	char	*final;
	int		size_base;

	size_base = 0;
	final = (char *)malloc(100 * sizeof(char));
	aux = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		final[aux] = '-';
		aux++;
	}
	while (base[size_base] != '\0')
		size_base++;
	while (nbr)
	{
		final[aux] = base[nbr % size_base];
		nbr = nbr / size_base;
		aux++;
	}
	return (final);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	char	*fin;
	int		i;
	int		aux;

	aux = 0;
	fin = (char *)malloc(100 * sizeof(char));
	i = 0;
	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	n = char_to_int(nbr, base_from);
	nbr = int_to_base(n, base_to);
	if (nbr[i] == '-')
	{
		fin[i] = '-';
		i++;
	}
	while (nbr[aux] != '\0')
		aux++;
	while (aux-- >= 0 && nbr[aux] != '-')
	{
		fin[i] = nbr[aux];
		i++;
	}
	return (fin);
}

/*int		main(void)
{
	char nbr[] = "-+--2147483648";
	char base_to[] = "0123456789ABCDEF";
	char base_from[] = "0123456789";
	char *res;

	res = ft_convert_base(nbr, base_from, base_to);
	if (res == NULL)
		return (1);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
