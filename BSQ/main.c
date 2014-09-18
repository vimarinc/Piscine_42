/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 11:04:39 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/18 11:04:43 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>

int			main(void)
{
	char	**carre;
	int 	x;
	int 	y;

	x = 0;
	y = 1;
	carre = NULL;
	carre = malloc_return(carre);
	ft_putstr_str(carre);
	carre = find_obstacle_ultimate(carre, x, y);
	return (0);
}
