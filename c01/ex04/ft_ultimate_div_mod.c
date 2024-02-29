/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:23:44 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/01 17:42:20 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int gdeger = *a;

	*a = gdeger / *b;
	*b = gdeger % *b;
}

int main()
{
	int x = 12;
	int y = 6;

	int *a = &x;
	int *b = &y;

	ft_ultimate_div_mod(&a, &b);

	printf("%d %d",a,b);

}
