/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 22:44:25 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/08 23:33:39 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int mod;

	mod = *a;

	*a = *a / *b;
	*b = mod % *b;
}
