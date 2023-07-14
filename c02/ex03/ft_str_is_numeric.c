/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:37:31 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 17:42:55 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_str_is_numeric(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= '0' && str[aux] <= '9')
		{
			aux++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*void	main(void)
{
	char	*src;
	int		i;

	src = (char *) malloc(15);
	strcpy(src, "4554512");
	i = ft_str_is_numeric(src);
	printf("%d", i);
	free(src);
}*/
