/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:56:16 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 14:57:57 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			put_char('0');
		put_char(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	aux;
	int	aux1;

	aux = 0;
	aux1 = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] < 32 || str[aux] == 127)
		{
			put_char('\\');
			aux1 = str[aux];
			ft_put_hexa(aux1, 0);
		}
		else
		{
			put_char(str[aux]);
		}
		aux++;
	}
}

/*int	main(void)
{
	char	*c;

	c = "Ola\nesta bem?";
	ft_putstr_non_printable(c);
	return (0);
}*/
