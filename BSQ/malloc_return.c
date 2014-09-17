/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 12:15:40 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 19:18:41 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>

char	**malloc_return(char **carre)
{
	int ret;
	char *buf;
	char *str;
	int i;

	i = 0;
	ret = 0;
	buf = (char*)malloc(sizeof(char) * 1000);
	if (buf == NULL)
		return (0);
	str = (char*)malloc(sizeof(char) * 1000);
	if (str == NULL)
		return (0);

	str[0] = '\0';
	while ((ret = read(0, buf, 10)))
	{
		buf[ret] = '\0';
		str = ft_mallocat(str, buf);
		buf = (char*)malloc(sizeof((*buf) * 1000));
	}
	carre = (char**)malloc(sizeof(char*) * (ft_atoi(str)));
	while (i <= ft_strlen(str))
	{
		carre[i] = (char*)malloc(sizeof(char) * ft_size_n(str));
		i++;
	}
	carre = tab_x_y(str, carre);
	ft_putstr("yo");


	return (carre);
}
