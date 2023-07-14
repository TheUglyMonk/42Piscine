/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:00:25 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 20:24:50 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	aux1;
	int	aux;

	aux = 0;
	aux1 = 0;
	if (to_find[aux1] == '\0')
		return (str);
	while (str[aux] != '\0')
	{
		while (str[aux + aux1] == to_find[aux1] && str[aux + aux1] != '\0')
			aux1++;
		if (to_find[aux1] == '\0')
			return (str + aux);
		aux++;
		aux1 = 0;
	}
	return (0);
}

/*int	main(void)
{
	char	haystack[50] = "TutorialsPoint123";
	char	needle[50] = "Poit";
	char	*ret;

	ret = ft_strstr(haystack, needle);
	printf("The substring is: %s\n", ret);
	return(0);
}*/
