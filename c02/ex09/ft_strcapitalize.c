/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:07:14 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/14 18:14:51 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*src;
	int		i;

	src = (char *) malloc(100);
	strcpy(src, "ola, tudo bem? 42palavras quarenta*e-duas; cinquenta+e+um");
	src = ft_strcapitalize(src);
	for(i=0 ; src[i] != '\0'; i++)
	{
		write(1, &src[i], 1);
	}
	free(src);
	return (0);
}*/
