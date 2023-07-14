/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:37:52 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/03/15 19:59:55 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		aux;
	unsigned int		aux1;

	aux = 0;
	aux1 = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (dest[aux] != '\0')
	{
		aux++;
	}
	while (src[aux1] != '\0' && aux1 < nb)
	{
		dest[aux] = src[aux1];
		aux++;
		aux1++;
	}
	dest[aux] = '\0';
	return (dest);
}

/*void	main(void)
{
	char src[20] = "Primeira";
	char dst[100] = "Segunda";
	printf("%s", ft_strncat(dst, src, 3));

}*/

/*int main()
{
    char *src = "Primeira";
    char *dst = malloc(sizeof(char) * (100 + 1)); // allocate memory for dst

    // check if memory allocation was successful
    if (dst == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    // copy initial value into dst
    int i = 0;
    while (i < 7 && dst[i] != '\0')
    {
        dst[i] = 'S'; // replace Segunda with SSSSSSS
        i++;
    }
    dst[i] = '\0';

    // concatenate and print
    printf("%s\n", ft_strncat(dst, src, 3));

    // free dynamically allocated memory
    free(dst);
    return 0;
}*/
