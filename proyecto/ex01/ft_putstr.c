/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:25:51 by damedina          #+#    #+#             */
/*   Updated: 2023/07/14 11:46:00 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;
	int		longitud;

	ptr = str;
	longitud = 0;
	while (*ptr != '\0')
	{
		longitud++;
		ptr++;
	}
	write(1, str, longitud);
}
/*
int	main(void)
{
	char	*cadena;

	cadena = "Patata";
	ft_putstr(cadena);
	return (0);
}
*/
