/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:58:49 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 19:07:34 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while (s1[aux] != '\0' && s2[aux] != '\0' && aux < n)
	{
		if (s1[aux] != s2[aux])
		{
			return ((unsigned char)s1[aux] - (unsigned char)s2[aux]);
		}
		aux++;
	}
	if (aux != n)
		return ((unsigned char)s1[aux] - (unsigned char)s2[aux]);
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "四十二";
	s2 = "ETYHRT";
	printf("%d", ft_strncmp(s1, s2, 5));
	printf("%d", strncmp(s1, s2, 5));
}
