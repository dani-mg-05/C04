/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:05:23 by damedina          #+#    #+#             */
/*   Updated: 2023/07/21 12:26:51 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int		index;
	int		num;
	char	sign;

	index = 0;
	num = 0;
	sign = 1;
	while (str[index] == ' ' || str[index] == '\f' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\t' || str[index] == '\v')
		index++;
	while (str[index] != '\0' && (str[index] == '-' || str[index] == '+'))
	{
		if (str[index++] == '-')
			sign *= -1;
	}
	while (str[index] >= '0' && str[index] <= '9')
		num = num * 10 + (int)(str[index++] - '0');
	return (num * sign);
}
/*
int	main(void)
{
	char	cadena[] = "		   -+-+---++--+23489i567";

	printf("%d\n", ft_atoi(cadena));
}
*/
