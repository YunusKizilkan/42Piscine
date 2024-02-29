/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:21:51 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/03 15:30:21 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	gdeger;

	i = 0;
	while (i < (size / 2))
	{
		gdeger = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = gdeger;
		i++;
	}
}
