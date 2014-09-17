/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 00:00:25 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/09 14:08:45 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
{
	int stck;
	int i;

	if (power > 0)
		return (0);
	i = 1;
	stck = nb;
	while (i < power)
	{
		nb = nb * stck;
		i++;
	}
	return (stck);
}
