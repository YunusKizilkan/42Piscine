/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:18:44 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/13 17:23:35 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;
	i = 1;
	if (nb > 0)
	{
		while ((i * i) <= n)
		{
			if ((i * i) == n)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}