/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/03 20:39:42 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/04 12:45:58 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n);

int		ft_putchar(int n)
{
	write(1, &n, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
