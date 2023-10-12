/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:09:34 by damedina          #+#    #+#             */
/*   Updated: 2023/07/14 11:42:14 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
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
	return (longitud);
}
/*
int	main(void)
{
	char	*cadena;

	cadena = "Patata";
	printf("Longitud: %d", ft_strlen(cadena));
	return (0);
}
*/
