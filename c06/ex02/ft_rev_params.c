/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:08:13 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/21 15:14:11 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	i;

	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i--;
	}
}
