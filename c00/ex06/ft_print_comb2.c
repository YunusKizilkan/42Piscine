/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:27:42 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/30 19:33:19 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		s1;
	int		s2;

	s1 = -1;
	while (s1++ < 98)
	{
		s2 = s1;
		while (s2++ < 99)
		{
			ft_putchar('0' + s1 / 10);
			ft_putchar('0' + s1 % 10);
			ft_putchar(' ');
			ft_putchar('0' + s2 / 10);
			ft_putchar('0' + s2 % 10);
			if (s1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
