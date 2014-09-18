/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compar_carre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 11:05:49 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/18 11:05:50 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	first_compare(char **str_old, int x, int y)
{
	int x_str_old;

	while (str_old[x][y] != '\n')
	{
		if (str_old[x][y] == 'x')
			x_str_old++;
		y++;
	}
	x++;
}

void	two_compare(char **str_new, int x, int y)
{
	int x_str_new;

	while (str_new[x][y] != '\n')
	{
		if (str_new[x][y] == 'x')
			x_str_new++;
		y++;
	}
	x++;
}

char	**ft_compare(char **str_old, char **str_new)
{
	int x_str_old;
	int x_str_new;
	int x;
	int y;

	x = 0;
	y = 0;
	x_str_old = 0;
	x_str_new = 0;
	while (str_old[x][y] != '\0')
		first_compare(str_old, x, y);
	x = 0;
	y = 0;
	while (str_new[x][y] != '\0')
	{
		two_compare(str_new, x, y);
	}
	if (x_str_old >= x_str_new)
		return (str_old);
	else
		return (str_new);
	return (0);
}
