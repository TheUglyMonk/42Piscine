/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:43:05 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/16 16:11:00 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r'))
			i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

/*int	main(void)
{
	char	*str = "---+--+1234ab567";
	printf("%d \n", ft_atoi(str));
}*/
