/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_obstacle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 11:06:01 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/18 11:06:03 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdio.h>

int		find_obstacle(char **str, int x, int y)
{
	while (str[y][x] != 'o' && str[y][x] != '\n')
	{
		y++;
		if (str[y][x] == 'o')
			return (y);
		else
			return (0);
	}
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
