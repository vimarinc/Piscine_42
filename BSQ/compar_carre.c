/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compar_carre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 12:53:08 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 13:00:31 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	{
		while (str_old[x][y] != '\n')
		{
			if (str_old[x][y] == 'x')
				x_str_old++;
			y++;
		}
		x++;
	}
	x = 0;
	y = 0;
	while (str_new[x][y] != '\0')
	{
		while (str_new[x][y] != '\n')
		{
			if (str_new[x][y] == 'x')
				x_str_new++;
			y++;
		}
		x++;
	}
	if (x_str_old >= x_str_new)
		return (str_old);
	else
		return (str_new);
	return (0);
}
