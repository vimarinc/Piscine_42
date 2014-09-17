/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 12:23:56 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/12 14:05:02 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	else
			ft_putchar(48 + nb);
}

int main(void)
{
	ft_putnbr(52);
	return (0);
}
