/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:41 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/01 16:21:55 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int a = 20;
	
	int	*nbr1= &a;
	int	**nbr2 = &nbr1;
	int	***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	printf("%d", *********nbr9);
	
	return (0);
}