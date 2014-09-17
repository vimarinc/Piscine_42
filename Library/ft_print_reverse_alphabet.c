/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/03 17:14:26 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/04 12:10:34 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_print_alphabet(void);

int			ft_putchar(char alphabet)
{
	write(1, &alphabet, 1);
	return (0);
}

void		ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		ft_putchar(alphabet);
		alphabet--;
	}
}
