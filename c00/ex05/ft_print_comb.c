/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:13:00 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 16:55:21 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	esp_vir(void)
{
	char	vir;
	char	esp;

	esp = ' ';
	vir = ',';
	write(1, &vir, 1);
	write(1, &esp, 1);
}

void	print_3(char a, char b, char c)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
}

void	ifs(int n1, int n2, int n3, int n)
{
	if (n1 != n2 && n1 != n3 && n2 != n3)
	{
		if (n3 == 0)
		{
			print_3(n1 + 48, n2 + 48, n3 + 48);
			esp_vir();
		}
		else
		{
			if (n3 < n2 && n3 < n1 && n2 < n1)
			{
				print_3(n1 + 48, n2 + 48, n3 + 48);
				if (n != 789)
				{
					esp_vir();
				}
			}
		}
	}
}

void	ft_print_comb(void)
{
	int	n;
	int	n1;
	int	n2;
	int	n3;

	n = 000;
	while (n < 999)
	{
		n1 = n % 10;
		n2 = n % 100;
		n2 = n2 / 10;
		n3 = n / 100;
		ifs(n1, n2, n3, n);
		n = n + 1;
	}
}

/*void	main(void)
{
	ft_print_comb();
}*/
