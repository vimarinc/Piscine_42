/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/03 19:03:58 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/04 12:22:39 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_print_numbers(void);

int			ft_putchar(char numbers)
{
	write(1, &numbers, 1);
	return (0);
}

void		ft_print_numbers(void)
{
	char numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		ft_putchar(numbers);
		numbers++;
	}
}
