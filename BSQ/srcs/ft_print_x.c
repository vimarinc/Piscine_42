/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <ghubault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 11:38:30 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/15 11:38:31 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_print_x(char **carre, char **str, int x, int y)
{
	int tmpy;

	tmpy = y;
	**carre = **str;
	while (carre[x][y] != 'o')
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
