normine/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <ghubault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 11:38:18 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/15 11:38:19 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int		ft_atoi(char *str)
{
	int	i;
	int nb;
	int value;

	value = 1;
	nb = 0;
	i = 0;
	while (str[i] < '0' || str[i] > '9')
		i++;
	if (str[i - 1] == '-')
		value = value * -1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = (nb + (str[i] - '0')) * 10;
		}
		i++;
	}
	nb = nb / 10;
	nb = nb * value;
	return (nb);
}
