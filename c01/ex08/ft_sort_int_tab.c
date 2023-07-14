/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:18:01 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/18 14:15:15 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	tmn;
	int	temp;

	aux = 0;
	tmn = 1;
	while (aux < size - 1)
	{
		while (tmn < size)
		{
			if (tab[aux] > tab[tmn])
			{
				temp = tab[aux];
				tab[aux] = tab[tmn];
				tab[tmn] = temp;
			}
			tmn++;
		}
		aux++;
		tmn = aux + 1;
	}
}
/*
void	main(void)
{
	int t[5]={5, 4, 6, 3, 1};
	int size;

	//t={5, 4, 6, 3, 1};
	size = 5;
	//printf("%d %d %d %d %d", t[0], t[1], t[2], t[3], t[4]);
	ft_sort_int_tab(t,size);
}*/
