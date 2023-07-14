/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:39:08 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/22 20:39:10 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

/*void	main(void)
{
	int	size = 5;
	int	i = 0;
	char	**strs;
	char	*sep;
	char	*aux;
	
	strs = (char**)malloc(size * sizeof(char*));
	sep = (char*)malloc(50);
	while (i < size)
	{
	        strs[i] = (char *)malloc(50);
	        i++;
	}
	i = 0;
	strcpy(strs[0], "P");
	strcpy(strs[1], "S");
	strcpy(strs[2], "T");
	strcpy(strs[3], "Q");
	strcpy(strs[4], "Q");
	strcpy(sep, "+");
	aux = ft_strjoin(size, strs, sep);
	while (aux[i] != '\0')
		{
		printf("%c", aux[i]);
		i++;
		}
	free(strs);
	free(aux);
	free(sep);
}*/

/*char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}*/
