/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:41:40 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/20 13:46:21 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	cont;
	int	aux1;

	aux = size - 1;
	cont = 0;
	while (cont < (size / 2))
	{
		aux1 = tab[cont];
		tab[cont] = tab[aux];
		tab[aux] = aux1;
		cont++;
		aux--;
	}
}

/*void	main(void)
{
	int a[] = {1, 2, 3, 4};
	int size;
	size = 4;
	ft_rev_int_tab(a,size);
	printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
}*/
