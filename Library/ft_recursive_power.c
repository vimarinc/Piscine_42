/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 12:50:49 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/09 14:47:09 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (1);
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		return (nb = nb * (ft_recursive_power(nb, power - 1)));
	}
}
