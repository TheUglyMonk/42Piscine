/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:48:04 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/13 18:32:24 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	aux_comb1(char a, char b, char c, char d)
{
	char	esp;

	esp = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &esp, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	aux_comb2(int n1, int n2)
{
	char	vir;
	char	esp;
	int		n2a;
	int		n2b;

	vir = ',';
	esp = ' ';
	while (n2 <= 99)
	{
		n2a = (n2 % 100) / 10;
		n2b = n2 % 10;
		if (((n1 % 100) / 10 != n2a || n1 % 10 != n2b) && n2 > n1)
		{
			aux_comb1((n1 / 10) + 48, (n1 % 10) + 48, n2a + 48, n2b + 48);
			if (n1 != 98)
			{
				write(1, &vir, 1);
				write(1, &esp, 1);
			}
		}
		n2 = n2 + 1;
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 00;
	n2 = 00;
	while (n1 <= 99)
	{
		aux_comb2(n1, n2);
		n1 = n1 + 1;
	}
}

/*void	main(void)
{
	ft_print_comb2();
}*/
