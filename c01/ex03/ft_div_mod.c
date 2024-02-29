/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:41:36 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/01 17:27:11 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int	a,	int	b,	int	*div,	int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 12;
	int b = 6;

	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	
	printf("%d %d", div, mod);

	return 0;
}