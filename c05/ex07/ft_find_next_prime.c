/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:10:39 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/20 19:23:14 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<time.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (i <= nb / 2)
	{
		if ((nb % i) == 0 && i == nb)
			return (nb);
		else if ((nb % i) == 0 && i != nb)
		{
			nb = nb + 2;
			i = 3;
		}
		i = i + 2;
	}
	return (nb);
}

/*int	main(void)
{
	time_t time_bef;
   	time(&time_bef);

	printf("%i\n", ft_find_next_prime(2147483647));
	
	time(&time_bef);
    if ((time_bef = (time(NULL) - time_bef)) > 5)
        printf("KO, timeout! max time is 10 seconds, took %li\n", time_bef);
    else
        printf("OK, time: %li seconds\n", time_bef);
}*/
