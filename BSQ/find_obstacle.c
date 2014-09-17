/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_carre.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 10:00:29 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 18:51:19 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		find_obstacle(char **str, int x, int y)
{
	//int cpt;

	//cpt = 0;
	while (str[y][x] != 'o' && str[y][x] != '\n')
		y++;
		if (str[y][x] == 'o')
		{
			//cpt = y;
			return (y);
		}
		else
			return (0);
}

char	**find_obstacle_ultimate(char **str, int x, int y)
{
	char **carre;

	carre = str;
	while (find_obstacle(str, x, y) == 0)
	{
		y = find_obstacle(str, x, y);	
		x++;
		printf("%d", y);
	}
	printf("%d", y);
	if (y >= (find_obstacle(str, x, y)) && x < y)
	{
		ft_putstr("you");
		x++;
	}
	if (x == y)
	{
		ft_print_x(carre, str, x, y);
	}
	else if (x < y)
	{
		y = x;
		carre = ft_print_x(carre, str, x, y);
	}
	return (carre);
}
