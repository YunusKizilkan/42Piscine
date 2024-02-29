/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:17:02 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/01 16:39:40 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

int main()
{
	int x = 10;
	int y = 25;

	int *a = &x;
	int *b = &y;

	ft_swap(a,b);
	
	printf("%d %d", x, y);

	return (0);
}