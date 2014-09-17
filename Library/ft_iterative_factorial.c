/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 18:28:18 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/08 20:45:47 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
	int i;
	int nb2;
	int j;

	j = 1;
	nb2 = nb;
	i = nb;
	while (j < nb2)
	{
		nb = (nb * (nb2 - j));
		j++;
	}
	return (0);
}
