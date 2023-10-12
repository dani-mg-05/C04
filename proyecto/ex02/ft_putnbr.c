/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:45:55 by damedina          #+#    #+#             */
/*   Updated: 2023/07/14 11:54:27 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mostrar_numeros(int nb)
{
	char	nb_char;

	if (nb < 10)
	{
		nb_char = nb + '0';
		write(1, &nb_char, 1);
	}
	else
	{
		mostrar_numeros(nb / 10);
		nb_char = (nb % 10) + '0';
		write(1, &nb_char, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb > -2147483648 && nb <= 2147483647)
	{
		if (nb > -2147483648 && nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		mostrar_numeros(nb);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
}
*/
