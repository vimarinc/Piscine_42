/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_x_y.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <ghubault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 11:40:44 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/15 11:40:45 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>

char	**tab_x_y(char *str, char **carre)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
		{
			carre[x][y] = str[i];
			i++;
			y++;
		}
		carre[x][y] = '\n';
		y = 0;
		i++;
		x++;
	}
	return (carre);
}
