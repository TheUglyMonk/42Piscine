/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:41:39 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/22 21:41:40 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	hex_to_int(char *nbr, long i, long j)
{
	long	n;
	char	*he;
	int		sign;

	he = "0123456789ABCDEF";
	sign = 1;
	n = 0;
	while (nbr[i] != '\0' && (nbr[i] >= 7 && nbr[i] <= 13))
		i++;
	while (nbr[i] != '\0' && (nbr[i] == '-' || nbr[i] == '+'))
	{
		if (nbr[i] == '-')
		sign *= (-1);
		i++;
	}
	while (((nbr[i] >= '0' && nbr[i] <= '9')
			|| (nbr[i] >= 'A' && nbr[i] <= 'F')) && nbr[i] != '\0')
	{
		while (he[j] != nbr[i])
			j++;
		n = (n * 16) + (j);
		j = 0;
		i++;
	}
	return (sign * (n / 16));
}

int	oct_to_int(char *nbr)
{
	long	i;
	long	n;
	char	*oc;
	int		sign;

	oc = "01234567";
	sign = 1;
	i = 0;
	n = 0;
	while (nbr[i] != '\0' && (nbr[i] >= 7 && nbr[i] <= 13))
		i++;
	while (nbr[i] != '\0' && (nbr[i] == '-' || nbr[i] == '+'))
	{
		if (nbr[i] == '-')
		sign *= (-1);
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '8' && nbr[i] != '\0')
	{
		n = (n * 8) + ((nbr[i] - 48));
		i++;
	}
	return (sign * (n / 8));
}

int	bin_to_int(char *nbr)
{
	long	i;
	long	n;
	char	*bi;
	int		sign;

	bi = "01";
	sign = 1;
	i = 0;
	n = 0;
	while (nbr[i] != '\0' && (nbr[i] >= 7 && nbr[i] <= 13))
		i++;
	while (nbr[i] != '\0' && (nbr[i] == '-' || nbr[i] == '+'))
	{
		if (nbr[i] == '-')
		sign *= (-1);
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '1' && nbr[i] != '\0')
	{
		n = (n * 2) + ((nbr[i] - 48));
		i++;
	}
	return (sign * (n / 2));
}

int	dec_to_int(char *nbr)
{
	long	i;
	long	n;
	char	*de;
	int		sign;

	de = "0123456789";
	sign = 1;
	i = 0;
	n = 0;
	while (nbr[i] != '\0' && (nbr[i] >= 7 && nbr[i] <= 13))
		i++;
	while (nbr[i] != '\0' && (nbr[i] == '-' || nbr[i] == '+'))
	{
		if (nbr[i] == '-')
		sign *= (-1);
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9' && nbr[i] != '\0')
	{
		n = (n * 10) + ((nbr[i] - 48));
		i++;
	}
	return (sign * (n / 10));
}

/*int	main(void)
{
	char	*bin;
	
	bin = "100";
	printf("%d \n", bin_to_int(bin));
	
	char	*dec;
	
	dec = "100";
	printf("%d \n", dec_to_int(dec));
	
	char	*oct;
	
	oct = "70";
	printf("%d \n", oct_to_int(oct));
	
	char	*hex;
	
	hex = "A";
	printf("%d \n", hex_to_int(hex));
}*/
