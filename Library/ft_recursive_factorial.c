/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 20:47:11 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/09 16:14:00 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}
