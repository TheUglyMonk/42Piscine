/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:03:58 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/20 18:11:27 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	check(char *a)
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

int	bs_lng(char *base)
{
	int	size;

	while (base[size] != '\0')
	{
		size++;
	}
	return (size);
}

int	nbr(char str, char *base)
{

int ft_atoi_base(char *str, char *base)
{
	int	i;
	int	size;
	int 	n;
	int	neg;
	
	n = 0; 
	i = 0;
	neg = 1;
	size = bs_lng(base);
	if(check(base) != 0)
	{
		if( str[i] == '-')
		{
			neg = -1;
			i++
		}
		while (str != '\0')
		{
			// passar para decimal 
			// n = (n*size) + nbr(str[i], base);
		}	
	}
	return	(neg * n);
}
