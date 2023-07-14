/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:52:36 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 17:43:44 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
		{
			aux++;
		}
		else if (str[aux] <= 'z' && str[aux] >= 'a')
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

/*int	main(void)
{
	char	*src;
	int		i;

	src = (char *) malloc(15);
	strcpy(src, "sourc5e");
	i = ft_str_is_alpha(src);
	printf("%d", i);
	free(src);
	return (0);
}*/
