/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 15:21:16 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/10 20:12:59 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '[')
			i++;
		if (str[i] > '[')
			str[i] = str[i] - 32;
		if (str[i] = '[')
			str[i] = '[';
		i++;
	}
	return (str);
}
