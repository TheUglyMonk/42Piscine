/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:52:00 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 17:56:01 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= ' ' && str[aux] <= '~')
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
	strcpy(src, "ADf D");
	i = ft_str_is_printable(src);
	printf("%d", i);
	free(src);
}*/
