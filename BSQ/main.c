/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 11:17:24 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 19:07:58 by sdurr            ###   ########.fr       */
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
