/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:15:10 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/11 19:16:46 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdbool.h>
#include<unistd.h>

int	create_nm(int n)
{
	int	aux;

	if(n == 1)
	{
		aux = 0;
	}
	if(n == 2)
        {
                aux = 00;
        }
        if(n == 3)
        {
                aux = 000;
        }
        if(n == 4)
        {
                aux = 0000;
        }
        if(n == 5)
        {
                aux = 00000;
        }
        if(n == 6)
        {
                aux = 000000;
        }
        if(n == 7)
        {
                aux = 0000000;
        }
        if(n == 8)
        {
                aux = 00000000;
        }
        if(n == 9)
        {
		aux = 000000000;
	}
	return (aux);
}

bool	testa_ig (int n, int num)
{
	int	i;
	bool	tst;
	int	a;
	int	nv;
	int	cur;
	int	num_dig;
	
	i = 0;
	a = 0;
	num_dig = n -1;
	tst = true;
	while ( i < n - 1)
	{
		nv = num /10;
		cur = num % 10;
		while (a < num_dig)
		{
			if (cur <= nv % 10)
			{
				tst = false;
				break;
			}
			else
			{
				nv = nv / 10;
				a = a + 1;
			}
		}
		i = i + 1;
		num = num / 10;
		num_dig = num_dig -1;
		a = 0;
	}

	return (tst);
}
void	print_num(int n, int num)
{
	char	c;
	int	i;
	int	mult;
	char	esp;

	esp = ' ';
	mult = 1;
	i = 0;
	while (i < (n - 1))
	{
		mult = mult * 10;
		i = i + 1;
	}
	while (n != 0)
	{
		i = num / mult;
		num = num % mult;
		c = i + 48;
		write(1, &c, 1);
		n = n - 1;
		mult = mult / 10;

	}
	write(1, &esp, 1);
}


void	ft_print_combn(int n)
{
	int	num;
	int	i;
	char	c;
	bool	test;
	int 	mult;

	i = 0;
	num = create_nm(n);
	while (1)
	{
		test = testa_ig(n, num);
		if (test == false)
		{
			num = num + 1;
			continue;
		}
		else
		{
			print_num(n, num);
			num = num + 1;
		}
		if ( i == 100 )
		{
			break;
		}
		i++;
	}
}

/*void	main(void)
{
	ft_print_combn(7);
}*/
