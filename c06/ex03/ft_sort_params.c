/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:14:24 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/21 15:31:07 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char s1[], char s2[])
{
	int	aux;

	aux = 0;
	while (s1[aux] != '\0' && s2[aux] != '\0' )
	{
		if (s1[aux] != s2[aux])
		{
			return (s1[aux] - s2[aux]);
		}
		aux++;
	}
	return (s1[aux] - s2[aux]);
}

void	wrt(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < (argc - 1))
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	wrt(argc, argv);
}	
