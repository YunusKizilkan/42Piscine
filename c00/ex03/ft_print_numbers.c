/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:55:05 by ykizilka          #+#    #+#             */
/*   Updated: 2024/01/25 20:55:05 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
