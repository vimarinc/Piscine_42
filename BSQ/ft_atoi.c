/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 12:31:10 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 17:25:25 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft.h"

int		ft_atoi(char *str)
{
	int i;
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
		if (str[i]>= '0' && str[i] <='9')
		{
			nb = (nb + (str[i] - '0')) * 10;
		}
		i++;
	}
	nb = nb / 10;
	nb = nb * value;
	return (nb);
}
