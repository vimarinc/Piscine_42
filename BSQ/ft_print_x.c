/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_carre.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 11:09:14 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 13:51:04 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_print_x(char **carre, char **str, int x, int y)
{
	int tmpy;

	tmpy = y;
	**carre = **str;
	while(carre[x][y] != 'o')
	{
		while (y > 0)
		{
			carre[x][y] = 'x';
			y--;
		}
		y = tmpy;
		x--;
	}
	return (carre);
}
