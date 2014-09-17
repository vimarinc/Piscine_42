/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/03 14:49:05 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/04 12:47:06 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void);

int		ft_putchar(char alphabet)
{
	write(1, &alphabet, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}
